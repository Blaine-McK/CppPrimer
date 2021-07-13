  // C++ Primer Exercise 1.21
// By Blaine McKeever
// 05/07/2021

// Write a program that takes several transactions and counts how many transactions occur for each
// ISBN

#include <iostream>
#include "Sales_item.h"

int main()
{

    Sales_item currentItem, previousItem;
    if (std::cin)
    {
        int count = 1;
        while (std::cin >> currentItem)
        {
            if (previousItem.isbn() == currentItem.isbn())
            {
                ++count;
            }
            else
            {
                std::cout << count << std::endl;
                count = 1;
            }
            previousItem = currentItem;
        }
    }
    else
    {
        int count = 0;
        std::cout << count << std::endl; 
    }

    return 0;
}