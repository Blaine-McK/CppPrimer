// C++ Primer Exercise 1.18
// By Blaine McKeever
// 04/07/2021

// Compile and run the example program giving it only equal values as input and then again with only unique numbers

#include <iostream>

int main()
{
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;

    // Read first number and ensure that we have data to process
    if (std::cin >> currVal)
    {
        // Start count for the current value we're processing
        int count = 1;

        // Read the remaining numbers
        while (std::cin >> val)
        {
            // If the values are the same
            if (currVal == val)
            {
                // Add 1 to count
                ++count;
            }
            else
            {
                // Otherwise, print the count for the previous value
                std::cout << currVal << " occurs " << count << " times." << std::endl;
                
                // Store new value
                currVal = val;

                // Reset the counter
                count = 1;
            }
        }
        // Print the the count for the last number in the file
        std::cout << currVal << " occurs " << count << " times." << std::endl;
    }
    return 0;
}