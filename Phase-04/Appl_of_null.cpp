
// application of NULL pointer

#include<iostream>
using namespace std;

void fun(int x) {
  cout << "called fun(int)" <<endl;
}

void fun(int *ptr){
  cout << "called fun(int*)" << endl;
}

int main() {
  int *ptr = 0; // null pointer , null is equivalent to 0
  cout << "Value of ptr: " << ptr << endl;
  // int *ptr = 10; //compilation error; pointer must store a vadid memory address

fun(NULL); // ambiguous  to remove ambiguity fun(0);
fun(nullptr); // Here nullptr defined point to null pointer

 return 0;
}