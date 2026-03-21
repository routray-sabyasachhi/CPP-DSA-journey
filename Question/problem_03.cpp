
// Returning Dynamically Allocated Memory
// Memory allocated inside fun persists even after the function ends since it is allocated on the Heap.
// The caller is responsible for deallocating the memory to avoid memory leaks.
// In this code, fun() allocates an integer on the heap and returns a pointer to it. The main function then dereferences this pointer to print the value. However, since the memory is allocated dynamically, it should be deallocated after use to prevent memory leaks.

#include<iostream>
using namespace std;

int *fun(){
  int *p = new int(10); // Dynamically allocate an integer and initialize it to 10
  return p;
}

int main() { 

  cout << *fun(); // Call the function and dereference the returned pointer to get the value

  return 0;
}