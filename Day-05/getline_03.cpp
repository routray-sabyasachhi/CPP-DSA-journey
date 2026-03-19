
// getline() with custom delimeter

#include<iostream>
using namespace std;

int main() {
  string name;
  cout << "Enter your name with ending ($) : ";
  getline(cin,name,'$'); // we can use '&' , ',' , or any othe delimeter
/*
-> In this example, the input stops being read when the $ character is encountered.
-> This feature is particularly useful when processing input data with specific delimiters.
*/

  cout << name << endl;
  return 0;
}