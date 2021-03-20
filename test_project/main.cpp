#include <iostream> // Include iostream functions, e.g. cout

using namespace std; // Prevent typing std::cout, now we can type cout

// Main function. This is the entry point of the program, and everything executed runs from here.
// Note that, in reality, the program does not start from main(), but from an internal compiler
// function that calls main().
int main() {
    // Set the variable x to the number 3.
    int x = 3;
    // Set the vairable y to the number 5.
    int y = 5;

    if (x > y) // if x is larger than y
        // Print that x is larger than y
        cout << "x is greater than y\n";
    else if (y > x) // if y is larger than x
        // Print that y is larger than x
        cout << "y is greater than x\n";
    else // if the values are equal
        // Print that the values are equal
        cout << "x and y are equal\n";

    // Return 0 (success)
    return 0;
}

