#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
     if (argc < 2) {
        std::cerr << "Error: invalid num of arguments" << std::endl;
        return 1;
    }
    PmergeMe pmergeMe(argc, argv);
    pmergeMe.sortNumbers();
    return 0;
}

