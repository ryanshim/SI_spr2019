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
    const int SIZE = 10;

    // Declare an array of size 10 in the stack.
    int foo[SIZE];

    // Populate the values of the array declared above with
    // the powers of 2 using the function provided above.
    for (int i = 0; i < SIZE; ++i) {
        foo[i] = get_power(2, i);
    }

    // Declare an array of size 10 in the heap.
    int* bar = new int[SIZE];

    // Populate the values of the array declared in the heap
    // with the powers of 3 usin gthe function provided above.
    for (int i = 0; i < SIZE; ++i) {
        bar[i] = get_power(3, i);
    }

    // Print out both arrays.
    print_array(foo, SIZE);
    print_array(bar, SIZE);
}