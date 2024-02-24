#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <sstream>

class BitcoinExchange {
public:
	BitcoinExchange(const std::string &filename);
	BitcoinExchange(const BitcoinExchange &rhs);
	BitcoinExchange& operator=(const BitcoinExchange &rhs);
	~BitcoinExchange();

	void ProcessInput(const std::string &filename);
private:
	BitcoinExchange();

	std::map<std::string, double> data_;
	double GetExchangeRate(const std::string &date);
	bool ValidateDate(const std::string &date);
	bool ValidateValue(const double &value);
};

#endif
