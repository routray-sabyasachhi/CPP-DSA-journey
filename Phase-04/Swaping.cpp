
// swap values using pointer

#include<iostream>

using namespace std;

void swap(int *x,int *y) {
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;

}

int main() {
   int a = 5 , b = 10;
   cout << "Before swap a = "<<a << " and b = " << b <<"\n";
   swap(a,b);
   cout << "After swap a = "<<a << " and b = " << b;
}