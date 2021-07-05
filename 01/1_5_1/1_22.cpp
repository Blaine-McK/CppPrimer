 // C++ Primer Exercise 1.21
// By Blaine McKeever
// 05/07/2021

// Write a program that reads several transactions that have the same ISBN and produces
// their sum

#include <iostream>
#include "Sales_item.h"

int main()
{
    
    Sales_item book, bookTotal;

    while (std::cin >> book)
    {
        bookTotal += book;
    }

    std::cout << bookTotal << std::endl;
    
    return 0;
}