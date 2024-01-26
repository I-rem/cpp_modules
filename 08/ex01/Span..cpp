#include "Span.hpp"

Span::Span() : N(0){}

Span::Span(unsigned int n) : N(n) {}

Span::Span(const Span &var) {
	*this = var;
}

Span &Span::operator=(const Span &var) {
	if (this == &var)
		return *this;
	this->N = var.N;
	this->numbers = var.numbers;
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
    if (numbers.size() < N)
        numbers.push_back(num);
    else
        throw std::overflow_error("Span is full. Cannot add more numbers.");

}

int Span::shortestSpan() {
    if (numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find span.");

    std::sort(numbers.begin(), numbers.end());
    int minSpan = numbers[1] - numbers[0];

    for (size_t i = 2; i < numbers.size(); ++i) {
        int currentSpan = numbers[i] - numbers[i - 1];
        if (currentSpan < minSpan)
            minSpan = currentSpan;
    }

    return minSpan;
}

int Span::longestSpan() {
    if (numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find span.");

    std::sort(numbers.begin(), numbers.end());
    return numbers.back() - numbers.front();
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (std::distance(begin, end) > static_cast<int>(N - numbers.size()))
        throw std::overflow_error("Not enough space to add the given range of numbers.");

    numbers.insert(numbers.end(), begin, end);
}

