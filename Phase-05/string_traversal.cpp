
// String traversal
/*
 i> string traversal using indices
 ii> string traversing using iterators
 iii> string traversal using rangebased
*/

#include<iostream>
using namespace std;

int main() {
  string str = "Sabyasachhi Routray";

  //  String traversal using indices
  for(int i = 0;i < str.length();i++){
    cout << str[i];
  }
  cout << "\n";   //newline

 // String traversal using range-based
 for(char x : str)
   cout << x ;
cout << "\n";   // newline

 // String traversal using iterator
 for(auto it = str.begin(); it != str.end(); ++it){
  cout << *it ;
 } 
  cout << "\n";  //newline
  return 0;
}