
// Diffrent types of string operations
/*

1> length() :: return the length of the string excluding '\0' null character

*/

#include<iostream>
#include<cstring>
using namespace std;

int main() {
  string name = "sabyasachhi routray";
  
  // Return the length of the string
  cout << name.length() << endl;

  // string concatination 
  cout << "hello " + name <<endl;

  // substring
  cout << name.substr(0,5) << endl;

  // find the searching string is present or not
  cout << name.find("sabya") << endl;
  cout << name.find("Sabya") << endl;

  return 0;
}