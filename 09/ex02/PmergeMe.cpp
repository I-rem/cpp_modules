#include "PmergeMe.hpp"


PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(int argc, char *argv[]) {

    for (int i = 1; i < argc; ++i) {
        int num;
        std::istringstream(argv[i]) >> num;
        if (num < 0) {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
        dataVec.push_back(num);
        dataList.push_back(num);
    }
}

PmergeMe::PmergeMe(const PmergeMe& other) : dataVec(other.dataVec), dataList(other.dataList) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
        dataVec = other.dataVec;
        dataList = other.dataList;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::display(const std::vector<int>& data) {
    for (size_t i = 0; i < data.size(); ++i) {
        std::cout << data[i];
        if (i != data.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

void PmergeMe::display(const std::list<int>& data) {
    for (std::list<int>::const_iterator it = data.begin(); it != data.end(); ++it) {
        std::cout << *it;
        if (++it != data.end()) {
            std::cout << " ";
            --it;
        }
        else {
            --it;
        }
    }
    std::cout << std::endl;
}

void PmergeMe::mergeSort(std::vector<int>& arr) {
    if (arr.size() <= 1)
        return;

    size_t mid = arr.size() / 2;
    std::vector<int> left(arr.begin(), arr.begin() + mid);
    std::vector<int> right(arr.begin() + mid, arr.end());

    mergeSort(left);
    mergeSort(right);

    std::merge(left.begin(), left.end(), right.begin(), right.end(), arr.begin());
}

void PmergeMe::mergeSort(std::list<int>& lst) {
    if (lst.size() <= 1)
        return;

    std::list<int> left, right;
    size_t mid = lst.size() / 2;
    std::list<int>::iterator it = lst.begin();
    for (size_t i = 0; i < mid; ++i, ++it)
        left.push_back(*it);
    for (; it != lst.end(); ++it)
        right.push_back(*it);

    mergeSort(left);
    mergeSort(right);

    lst.clear();
    std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(lst));
}

void PmergeMe::sortNumbers() {
    std::cout << "Before: ";
    display(dataVec);

    std::clock_t startVec = std::clock();
    mergeSort(dataVec);
    std::clock_t endVec = std::clock();

    std::clock_t startList = std::clock();
    mergeSort(dataList);
    std::clock_t endList = std::clock();

    std::cout << "After: ";
    display(dataVec);

    double elapsedVec = (endVec - startVec) * 1000000.0 / CLOCKS_PER_SEC;
    double elapsedList = (endList - startList) * 1000000.0 / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << dataVec.size() << " elements with std::vector: "
              << elapsedVec << " us" << std::endl;
    std::cout << "Time to process a range of " << dataList.size() << " elements with std::list: "
              << elapsedList << " us" << std::endl;
}

