// C++ Primer Exercise 1.20
// By Blaine McKeever
// 05/07/2021

// Use Sales_item.h to write a program that reads in a set of book sales transactions, writing
// each transaction to the standard output

#include <iostream>
#include "Sales_item.h"

int main()
{
    std::cout << "Sales transactions" << std::endl;

    Sales_item item;

    while (std::cin >> item)
    {
        std::cout << item << std::endl;
    }

    std::cout << std::endl;

    return 0;
}