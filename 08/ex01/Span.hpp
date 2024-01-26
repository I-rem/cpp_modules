#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span {
private:
    unsigned int N;
    std::vector<int> numbers;

public:
    Span();
	Span(unsigned int n);
	Span(const Span& var);
	Span& operator=(const Span& var);
    ~Span();

    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
    void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif

