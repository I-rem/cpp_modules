#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    try {
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);

        std::vector<int>::iterator vecResult = easyfind(vec, 3);
        std::cout << "Value found in vector at position: " << std::distance(vec.begin(), vecResult) << std::endl;

        std::list<int> lst;
        lst.push_back(10);
        lst.push_back(20);
        lst.push_back(30);
        lst.push_back(40);
        lst.push_back(50);

        std::list<int>::iterator lstResult = easyfind(lst, 20);
        std::cout << "Value found in list at position: " << std::distance(lst.begin(), lstResult) << std::endl;

        easyfind(vec, 100);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

