#ifndef FIXEDVECTOR_H_
#define FIXEDVECTOR_H_
#include <stdexcept>

template <typename E>
class FixedVector {
    public:
        FixedVector(int len);
        FixedVector(const FixedVector& a);
        ~FixedVector();
        int get_length() const;
        bool empty() const;
        E& get_elt(int index);
        void set_elt(int index, E& value);
        E& operator[](int index);
        
    private:
        int length_;
        E *vector_array_;
};

// Constructor. When creating a fixed vector, we should have a predefined array
// length argument passed into the constructor. There are three things we need
// to do in the constructor:
//
// 1. Validate whether length passed in is greater than 0.
// 2. Set the object's class member variable, length_, to len arg.
// 3. Set the vector_array_ pointer var to a new array of length, length_.
template <typename E>
FixedVector<E>::FixedVector(int len) {
    // TO BE COMPLETED
}

// Copy constructor. The copy constructor should take in another instantiated
// FixedVector object and copy the elements of it to a new FixedVector object.
template <typename E>
FixedVector<E>::FixedVector(const FixedVector& a) {
    // TO BE COMPLETED
}

// Destructor. The destructor should delete any variables declared and
// initialized in the heap.
template <typename E>
FixedVector<E>::~FixedVector() {
    // TO BE COMPLETED
}

// This function should return the length of the array.
template <typename E>
int FixedVector<E>::get_length() const {
    // TO BE COMPLETED
}

// This function checks if the vector is empty.
template <typename E>
bool FixedVector<E>::empty() const {
    // TO BE COMPLETED
}

// This function retrieves the element stored at the index specified by the
// argument. We need to check if the index argument is valid (i.e., < 0 or >
// length_-1). If the index is valid, we can return the element stored there.
template <typename E>
E& FixedVector<E>::get_elt(int index) {
    // TO BE COMPLETED
}

// This function sets the element stored at the index specified by the
// argument. We need to check if the index argument is valid (i.e., < 0 or >
// length_-1). If the index is valid, we can set the value at that index.
template <typename E>
void FixedVector<E>::set_elt(int index, E& value) {
    // TO BE COMPLETED
}

// Overload [] operator. Here, we are overloading the [] (i.e., the bracket
// operator). Again, we need to check if the index arg. is valid. If it is,
// use the get() function that we completed above to return the element at the
// specified index.
template <typename E>
E& FixedVector<E>::operator[](int index) {
    // TO BE COMPLETED
}

#endif
