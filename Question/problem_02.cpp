
//

#include<iostream>
using namespace std;

int* fun() {
  int x = 10; // local variable
  return &x; // returning address of local variable, which will go out of scope after the function returns
}

int main() {

  cout << *fun(); // undefined behavior, fun() returns a pointer to a local variable which goes out of scope after the function returns
  cout << "hello" ; // this line may not execute due to undefined behavior in the previous line
  return 0;
}