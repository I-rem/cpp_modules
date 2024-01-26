#include <iostream>
#include "Span.hpp"

int main() {
    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        int arr[] = {8, 15, 4};
        std::vector<int> additionalNumbers(arr, arr + sizeof(arr) / sizeof(arr[0]));
        sp.addNumbers(additionalNumbers.begin(), additionalNumbers.end());

        std::cout << "Shortest Span (after adding more numbers): " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span (after adding more numbers): " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

