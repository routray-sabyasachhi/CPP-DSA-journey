#include <iostream>
using namespace std;

int sum_result(int x, int y) { // formal parameters
  return x+y ;
}

int sub_result ( int *x, int *y){
// here swap logic also implemented to show the effect of call by reference
 int temp = *x + *y ;
 *x = temp - *x ;
 *y = temp - *y ;
 return *x-*y;
}



int main() {
int a = 5, b = 10;

// Note:  above The values of a and b remain unchanged after the function call
int sum = sum_result(a,b); // actual parameters & call by value
cout << "The sum of " << a << " and " << b << " is: " << sum << endl;

// Note:  above The values of a and b are modified after the function call
int sub = sub_result(&a , &b); // call by reference
cout << "difference is : " << sub <<endl;


return 0;
}