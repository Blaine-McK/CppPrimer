// C++ Primer
// Section 2.5.2
// Exercise 2.35
// By Blaine McKeever
// 02/09/21

/*
    Determine the types deduced in each of the following definitions. Once
    you have figured out the types, write a program to see whether you were
    correct
*/

#include <iostream>
#include <typeinfo>

int main()
{
    const int i = 42;           // i is a const int literal 42
    auto j = i;                 // i has top-level const which is diregarded, j is of type int
    const auto &k = i;          // k is a reference of type const int that is bound to i
    auto *p = &i;               // p is a const pointer to int that stores the memory address of i
    const auto j2 = i, &k2 = i; // j2 is a const int that is assigned the value of i,
                                // k2 is a reference of type const int that is bound to i

    std::cout << typeid(i).name() << std::endl;
    std::cout << typeid(j).name() << std::endl;
    std::cout << typeid(k).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;
    std::cout << typeid(j2).name() << std::endl;
    std::cout << typeid(k2).name() << std::endl;

    return 0;
}