
// Find one extra character in strings

#include <iostream>
#include <string>
using namespace std;

char findExtraCharacter (string s1, string s2){
  char result = 0;
  // XOR all characters in s1
  for ( char c : s1)
  result ^= c;
  // XOR all characters in s2
  for ( char c : s2)
  result ^= c;

  return result;
}

int main() {
 string s1, s2;
 cout << "Enter first string : ";
 cin >> s1;
 cout << " Enter second string : ";
 cin >> s2;
 char extra = findExtraCharacter(s1, s2);

 cout << "Exxtra character is : " << extra;
  return 0;
}