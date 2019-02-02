// CPSC 131 SI: Review Exercise 2
// 1. Instantiate a Student object in the heap.
// 2. Complete the functions that allow a user to populate the values
//    within the struct and displays the student object passed in.
#include <iostream>
#include <string>

struct Student {
    int cwid;
    std::string first, last;
    int num_courses;
    std::string courses[10];
};

// This function populates the fields of the student object from user
// input into the student object passed in as an argument.
Student* populate_fields(Student* x) {
    std::cout << "Enter CWID $ ";
    std::cin >> x->cwid;
    std::cout << "Enter First Name $ ";
    std::cin >> x->first;
    std::cout << "Enter Last Name $ ";
    std::cin >> x->last;
    std::cout << "Enter Number of Courses $ ";
    std::cin >> x->num_courses;
    for (int i = 0; i < x->num_courses; ++i) {
        std::cout << "Course " << i+1 << " $ ";
        std::cin >> x->courses[i];
    }
    return x;
}

// Displays the student object passed in.
void display_student(Student* x) {
    std::cout << std::endl << "CWID: " << x->cwid << std::endl;
    std::cout << "FIRST NAME: " << x->first << std::endl;
    std::cout << "LAST NAME: " << x->last << std::endl;
    std::cout << "COURSES: " << std::endl;
    for (int i = 0; i < x->num_courses; ++i) {
        std::cout << "\t" << i+1 << ". " << x->courses[i] << std::endl;
    }
}

int main() {
    // Declare a Student object
    Student* foo = new Student;

    // Call the functions that were completed
    foo = populate_fields(foo);
    display_student(foo);

    return 0;
}