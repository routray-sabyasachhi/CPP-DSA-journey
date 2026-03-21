
// 

#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of an array : " ;
  cin >> n;
  int *ptr = new int[n]; // uninitialize allocating memory
  *(ptr) = 10;
  cout << *ptr << endl; // *ptr = *(ptr+0) = ptrr[0];
  cout << *(ptr+1) << "\n"; //here print garbage value

  delete[] ptr; // deallocating memory but ptr exist and point to invalid memory location and return to the system
  ptr = NULL;


  return 0;
}