// Singly Linked List head_er file
// NOTE: Minimal implementation
//
#ifndef SLINKEDLIST_HPP_
#define SLINKEDLIST_HPP_
#include <iostream>
#include <stdexcept>

template <typename E>
class Node {
  public:
    Node(const E& e, Node<E> *nxt) 
      : elem(e), next(nxt) {}
    E elem;
    Node<E>* next;
};

template <typename E>
class SLinkedList {
  public:
    SLinkedList();					      // constructor
    ~SLinkedList();					      // destructor
    bool empty() const;           // is list empty?
    E& front();                   // return front element
    void push_back(const E& e);    // add e to back of list
    void add_front(const E& e);   // add e to front of list
    void remove_front();				  // remove front element
    int size() const;				      // list size
    void display();
  private:
    Node<E> *head_;
    int n_;
};

// Display all elements of the list
template <typename E>
void SLinkedList<E>::display() {
  // TO BE COMPLETED
}

// Add an element to the back of the list.
template <typename E>
void SLinkedList<E>::push_back(const E& e) {
  // TO BE COMPLETED
}

// Constructor
template <typename E>
SLinkedList<E>::SLinkedList()
  : head_(nullptr), n_(0) {}

// Destructor
template <typename E>
SLinkedList<E>::~SLinkedList() {
  while (!empty()) {
    remove_front();
  }
}

// Check if the linked list is empty.
template <typename E>
bool SLinkedList<E>::empty() const {
  return (n_ == 0);
}

// Return the number of elements in the linked list.
template <typename E>
int SLinkedList<E>::size() const {
  return n_;
}

// Return the value of the front element.
template <typename E>
E& SLinkedList<E>::front() {
  return head_->elem;
}

// Add an element to the front of the linked list.
template <typename E>
void SLinkedList<E>::add_front(const E& e) {
  if (head_ == nullptr) {
    head_ = new Node<E>(e, nullptr);
  } else {
    head_ = new Node<E>(e, head_);
  }
  n_++;
}

// Remove an element at the front of the linked list.
template <typename E>
void SLinkedList<E>::remove_front() {
  if (head_ == nullptr) 
    throw std::length_error("Cannot remove from empty list.");
  Node<E> *nodeptr = head_;
  head_ = head_->next;
  delete nodeptr;
  n_--;
}

#endif
