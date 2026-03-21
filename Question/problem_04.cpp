
// Proper Deallocation After Function Call
// In this code, we have a function `fun()` that dynamically allocates an integer and returns a pointer to it. In the `main()` function, we call `fun()`, print the value, and then properly deallocate the memory using `delete` to prevent a memory leak.
// Note: Always remember to deallocate any dynamically allocated memory to avoid memory leaks in your programs.

#include<iostream>
using namespace std;

int *fun(){
  int *ptr = new int(10); // Dynamically allocate an integer and initialize it to 10
  return ptr; // Return the pointer to the allocated memory
}

int main(){
   int *ptr = fun();
   cout << "Value: " << *ptr << endl; // Output the value pointed to by ptr
   cout << "Address: " << ptr << endl; // Output the address of the allocated memory
   delete ptr; // Properly deallocate the memory to prevent memory leak
   ptr = nullptr; // Set pointer to nullptr after deletion for safety
  return 0;
}