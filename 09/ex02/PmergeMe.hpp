#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <ctime>

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(int argc, char *argv[]);
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void sortNumbers();

private:
    void display(const std::vector<int>& data);
    void display(const std::list<int>& data);
    void mergeSort(std::vector<int>& arr);
    void mergeSort(std::list<int>& lst);

private:
    std::vector<int> dataVec;
    std::list<int> dataList;
};

#endif

