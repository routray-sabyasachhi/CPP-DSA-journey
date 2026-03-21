#include <iostream>
using namespace std;

int main() {

int a = 6;
int *aptr = &a;
int **aptrptr = &aptr;
cout << a << " address of a : " << aptr << " address of aptr : "<< aptrptr << " address of aptrptr : " << &aptrptr << endl;
cout << "value at **aptrptr : "<<**aptrptr<<endl;

// Array and pointer
int marks[]={10, 20, 30};
int *p = marks;
// marks = marks++ ; //array name is constant and can't be lvalue
cout << *p << endl;
p = ++p;
cout << *p << endl;

  return 0;
}