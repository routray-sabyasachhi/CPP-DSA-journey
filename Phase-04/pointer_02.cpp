
// pointer.md (8, )

#include<iostream>
using namespace std; 

int main() {

  int arr[] = {10, 20, 30, 40, 50};
  int *ptr = arr ; // assigning base bddress of array to ptr*

  cout << *ptr << " " << ptr << "\n";

  ptr++;
  cout << *ptr << " " << ptr << "\n";

  ptr--;
  cout << *ptr << " " << ptr << "\n";


  return 0;
}