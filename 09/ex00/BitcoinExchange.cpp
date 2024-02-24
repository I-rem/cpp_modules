#include "BitcoinExchange.hpp"

#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <sstream>

BitcoinExchange::BitcoinExchange(const std::string& filename) {
	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line)) {
		std::string::size_type delimiter_pos = line.find(',');
		if (delimiter_pos == std::string::npos) {
			std::cerr << "Error: Invalid format in database => "
				  << line << '\n';
			continue;
		}

		std::string date = line.substr(0, delimiter_pos);
		std::string rate_str = line.substr(delimiter_pos + 1);

		double rate;
		std::istringstream rate_stream(rate_str);
		if (!(rate_stream >> rate)) {
			std::cerr << "Error: Invalid rate format in database => "
				  << rate_str << '\n';
			continue;
		}

		data_[date] = rate;
	}
}

double BitcoinExchange::GetExchangeRate(const std::string &date) {
	std::map<std::string, double>::iterator it = data_.lower_bound(date);

	if (it->first != date && it != data_.begin())
		--it;


	if (it != data_.end())
		return it->second;
	else if (!data_.empty())
		return it->second;

	return -1.0;
}

bool BitcoinExchange::ValidateDate(const std::string& date) {
	std::string::size_type del1 = date.find('-');
	std::string::size_type del2 = date.rfind('-');

	if (del1 == std::string::npos || del1 == del2)
		return false;

	std::string year_str = date.substr(0, del1);
	std::string month_str = date.substr(del1 + 1, del2 - del1 - 1);
	std::string day_str = date.substr(del2 + 1);

	int year, month, day;
	std::istringstream year_ss(year_str), month_ss(month_str), day_ss(day_str);

	if (!(year_ss >> year) || !(month_ss >> month) || !(day_ss >> day))
		return false;

	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;


	if (month == 4 || month == 6 || month == 9 || month == 11)
		if (day > 30)
			return false;

	if (month == 2) {
		bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		if ((isLeapYear && day > 29) || (!isLeapYear && day > 28)) {
			return false;
		}
	}

	return true;
}

bool BitcoinExchange::ValidateValue(const double &value) {
	if (value < 0 || value > 1000)
	{
		if (value < 0)
			std::cerr << "Error: too small a number. " << std::endl;
		else if (value > 1000)
			std::cerr << "Error: too large a number. " << std::endl;
		return false;
	}
	return true;
}

void BitcoinExchange::ProcessInput(const std::string &filename) {
    std::ifstream file(filename.c_str());
    std::string line;
    std::getline(file, line); // Skip the header line

    while (std::getline(file, line)) {
        if (line.empty())
		{
            std::cerr << "Error: Empty line encountered.\n";
            continue;
        }


        size_t delimiter_pos_pipe = line.find('|');
        size_t delimiter_pos_comma = line.find(',');


        if (delimiter_pos_pipe == std::string::npos && delimiter_pos_comma == std::string::npos)
		{
            std::cerr << "Error: bad input => " << line << '\n';
            continue;
        }

        size_t delimiter_pos;
        if (delimiter_pos_pipe != std::string::npos && delimiter_pos_comma != std::string::npos)
            delimiter_pos = std::min(delimiter_pos_pipe, delimiter_pos_comma);
		else if (delimiter_pos_pipe != std::string::npos)
            delimiter_pos = delimiter_pos_pipe;
		else
            delimiter_pos = delimiter_pos_comma;

        std::string date = line.substr(0, delimiter_pos);
        std::string value_str = line.substr(delimiter_pos + 1);

        double value;
        std::istringstream(value_str) >> value;

        if (!ValidateDate(date)) {
            std::cerr << "Error: Invalid date format in line => " << line << '\n';
            continue;
        }

        if (!ValidateValue(value))
            continue;

        double exchangeRate = GetExchangeRate(date);
        if (exchangeRate == -1.0) {
            std::cerr << "Error: No exchange rate available for date => " << date << '\n';
            continue;
        }

        std::cout << date << " => " << value << " = " << value * exchangeRate << '\n';
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs)
{
    data_ = rhs.data_;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &rhs) {
    if (this != &rhs)
        data_ = rhs.data_;
    return *this;
}
