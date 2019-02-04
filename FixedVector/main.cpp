// CPSC 131 SI Fixed Vector Implementation
//
// **Do not change this file**
//
// Compile: g++ -std=c++11 main.cpp -o main
// Run: ./main
#include <iostream>
#include <assert.h>
#include "FixedVector.h"

int main() {
    // Instantiate a FixedVector object on the stack.
    FixedVector<int> int_vector(5);

    // Add elements into the FixedVector
    for (int i = 0; i < 5; ++i) {
        int_vector.set_elt(i, i);
    }

    // Array get_length test
    std::cout << "TESTING get_length() FUNCTION";
    assert(int_vector.get_length() == 5);
    std::cout << "-->PASSED" << std::endl;

    // Array empty() test
    std::cout << "TESTING empty() FUNCTION";
    assert(int_vector.empty() == false);
    std::cout << "-->PASSED" << std::endl;

    // set_elt() test
    int test_num = 100;
    std::cout << "TESTING set_elt() FUNCTION";
    int_vector.set_elt(0, test_num);
    assert(int_vector.get_elt(0) == 100);
    std::cout << "-->PASSED" << std::endl;

    // Overloaded operator test
    std::cout << "TESTING [] OPERATOR";
    assert(int_vector[0] == 100);
    std::cout << "-->PASSED" << std::endl;

    // Copy constructor test
    std::cout << "TESTING COPY CONSTRUCTOR";
    FixedVector<int> int_vector_copy(int_vector);
    assert(int_vector_copy.get_elt(0) == 100);
    for (int i = 1; i < 5; ++i) {
        assert(int_vector_copy.get_elt(i) == i);
    }
    std::cout << "-->PASSED" << std::endl;

    return 0;
}
