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
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 10;

    // Declare an array of size 10 in the stack.
    int foo[size];

    // Populate the values of the array declared above with
    // the powers of 2 using the function provided above.
    for (int i = 0; i < size; ++i) {
        foo[i] = get_power(2, i);
    }

    // Declare an array of size 10 in the heap.
    int* bar = new int[size]; 

    // Populate the values of the array declared in the heap
    // with the powers of 3 using the function provided above.
    for (int i = 0; i < size; ++i) {
        bar[i] = get_power(3, i);
    }

    // Print out both arrays.
    print_array(foo, size);
    print_array(bar, size);

    return 0;
}
