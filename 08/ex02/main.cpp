#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "MutantStack top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "MutantStack size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    std::list<int> l;
    l.push_back(5);
    l.push_back(17);
    std::cout << "std::list back: " << l.back() << std::endl;
    l.pop_back();
    std::cout << "std::list size: " << l.size() << std::endl;
    l.push_back(3);
    l.push_back(5);
    l.push_back(737);
    l.push_back(0);

    std::list<int>::iterator lit = l.begin();
    std::list<int>::iterator lite = l.end();
    while (lit != lite) {
        std::cout << *lit << std::endl;
        ++lit;
    }

    {

        MutantStack<int> mutantStack;
        for (int i = 1; i <= 5; ++i) {
            mutantStack.push(i * 10);
        }

        std::cout << "MutantStack elements using iterators: ";
        for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;

        mutantStack.pop();
        std::cout << "MutantStack elements after popping: ";
        for (MutantStack<int>::const_iterator it = mutantStack.begin(); it != mutantStack.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }
    return 0;
}

