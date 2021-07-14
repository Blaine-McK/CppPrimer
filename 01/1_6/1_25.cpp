// C++ Primer Exercise 1.23 and 1.24
// By Blaine McKeever
// 14/07/2021

#include <iostream>
#include "Sales_item.h"

int main()
{
    // Var to hold data for the next transaction
    Sales_item transaction;

    // Read in the first transaction and ensure that there are data to process
    if (std::cin >> transaction)
    {
        // Var to hold the running sum
        Sales_item nextTransaction;
        
        // Read and process remaining transactions
        while (std::cin >> nextTransaction)
        {
            if (transaction.isbn() == nextTransaction.isbn())
            {
                // Update the total
                transaction += nextTransaction;
            }
            else
            {
            // Print the results for the previous book
            std::cout << transaction << std::endl;

            // Set transaction to next book
            transaction = nextTransaction;
            }
        }
        // Print the last transaction
        std::cout << transaction << std::endl;
    }
    else
    {
        // No input! warn the user
        std::cerr << "No data..." << std::endl;
        
        // Indicate failure
        return -1;
    }
    
    return 0;
}