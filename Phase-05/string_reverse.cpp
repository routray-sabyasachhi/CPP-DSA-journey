
// Reverse a string using C++

/*
Approach :

The goal is to iterate through the string from the last character to the first and construct a new string by appending characters in reverse order.
*/

#include <iostream>
#include<string>
using namespace std;
int main() {
 // Intialize an empty string to hold the reverse string
 string rev = "";

// input a string to reverse it
string s;
cout << "Enter a string to reverse it... ";
cin >> s;
// first finding the length of the string
int length = s.length() - 1 ; // calculate the last index of the string
while(length >= 0){
  char append = s[length];
  rev = rev + append;
  length --;
}
cout << rev;

  return 0;
}