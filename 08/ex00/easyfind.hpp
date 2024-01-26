#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator result = std::find(container.begin(), container.end(), value);
    if (result == container.end()) {
        throw std::runtime_error("Value not found in the container");
    }
    return result;
}

#endif

