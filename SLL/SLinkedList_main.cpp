// Main to test Singly Linked List
//
#include <iostream>
#include <cassert>
#include "SLinkedList.hpp"

using namespace std;

int main() {
  SLinkedList<int> int_list;

  // insert elements
  int count = 100;
  while (count < 600) {
    int_list.add_front(count);
    count += 100;
  }

  int_list.display();

  int test_int = int_list.front(); 
  cout << "Current front element: " << test_int << endl;
  assert (test_int == 500);

  // delete a front element
  int_list.remove_front(); 
  test_int = int_list.front(); 
  cout << "Current front element: " << test_int << endl;
  assert (test_int == 400);

  // delete a front element
  int_list.remove_front(); 
  test_int = int_list.front(); 
  cout << "Current front element: " << test_int << endl;
  assert (test_int == 300);

  // delete a front element
  int_list.remove_front(); 
  test_int = int_list.front(); 
  cout << "Current front element: " << test_int << endl;
  assert (test_int == 200);

  // delete a front element
  int_list.remove_front(); 
  test_int = int_list.front(); 
  cout << "Current front element: " << test_int << endl;
  assert (test_int == 100);

  // delete a front element
  int_list.remove_front(); 

  return 0;
}
