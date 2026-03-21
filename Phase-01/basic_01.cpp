#include <iostream>
using namespace std;

int b = 6; //global variable 

int main() {
   float a=34.58; /*local variable*/
   cout << a << " "<< b ;

   const int roll = 34; //constant variable by using const keyword
   cout << " " << roll; // << is call insertion operator 
   // const int roll = 27 ; //error: redefination of 'roll' is not allowed
   
   cout << " a+b = " << a+b << endl; //expression
   cout << " a-b = " << a-b << endl; // subtraction operator is applicable on both integer and floating point datatypes, so we can perform subtraction operation on a and b without typecasting.
   cout << " a*b = " << a*b << endl; // multiplication operator is applicable on both integer and floating point datatypes, so we can perform multiplication operation on a and b without typecasting.
   cout << " a/b = " << a/b << endl; // division operator is applicable on both integer and floating point datatypes, so we can perform division operation on a and b without typecasting.
   cout << " a%b = " << (int)a%(int)b << endl; // modular operator is only applicable on integer datatypes, so we have to typecast a and b to int before performing the modulus operation.
   cout << " ++b = " << ++b << endl; // pre-increment operator is applicable on both integer and floating point datatypes, so we can perform pre-increment operation on b without typecasting.
   cout << " a++ = " << a++ << endl; // post-increment operator is applicable on both integer and floating point datatypes, so we can perform post-increment operation on a without typecasting.

  /////////////////////////////////////////////////////////////////////
  int num;
  cout << "Enter a number : ";
  cin >> num; // >> is called extraction operator
  cout << "You entered : " << num << endl;
   return 0;

}