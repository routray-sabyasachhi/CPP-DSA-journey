
// dt- 02/03/2026
// finding the sizeof array by sizeof() 

#include<iostream>

using namespace std;

void f(int ar[]) {
  cout << "size of array in function : " << sizeof(ar) << endl ; // here we will get the size of pointer not the size of array because when we pass an array to a function it decays to a pointer to its first element
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]) ; // finding the number of elements in the array
  cout << "size of array : " << n << endl ;
  cout << "size of int data type : " << sizeof(int) << endl ;
  
  f(arr); // passing the array to function
  return 0;
}