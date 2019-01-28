// CPSC 131-04 SI Session 1 Review
// Spring 2019
//
// Linux users, to compile this program use the following commands:
//      g++ -std=c++11 review1.cpp -o review1
//      ./review1
//
#include <iostream>
#include "math.h"

int get_power(int base, int exponent) {
    return pow(base, exponent);
}

void print_array(int *arr, int size) {
    // TO BE COMPLETED
}

int main() {
    const int size = 10;

    // Declare an array of size 10 in the stack.

    // Populate the values of the array declared above with
    // the powers of 2 using the function provided above.


    // Declare an array of size 10 in the heap.


    // Populate the values of the array declared in the heap
    // with the powers of 3 using the function provided above.


    // Print out both arrays.

    return 0;
}
