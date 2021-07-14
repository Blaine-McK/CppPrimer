// C++ Primer Exercise 1.23 and 1.24
// By Blaine McKeever
// 14/07/2021

// Write a program that takes several transactions and counts how many transactions occur for each
// ISBN

// Test the program by reading in multiple transactions represeneting multiple ISBNs. Grouping
// each ISBN togethe

#include <iostream>
#include "Sales_item.h"

int main()
{
    // Counter to store number of transactions
    int count = 0;

    // Store read in item and previous item
    Sales_item currentItem, nextItem;

    // Read in first value and check that there is data to process
    if (std::cin >> currentItem)
    {
        ++count;

        // Read the rest of the transactions
        while (std::cin >> nextItem)
        {
            // If the next transaction has the same isbn as the current
            if (currentItem.isbn() == nextItem.isbn())
            {
                // Increment the counter
                ++count;
            }
            else
            {
                //Otherwise print the counter and reset to 1
                std::cout << count << std::endl;
                count = 1;
            }

            // Set the next item to current item
            currentItem = nextItem;
        }

        // Print count for last value in file
        std::cout << count << std::endl;
    }

    return 0;
}