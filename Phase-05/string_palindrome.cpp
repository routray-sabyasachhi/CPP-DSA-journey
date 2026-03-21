
// check string palindrome

#include<iostream>
#include<string>
using namespace std;

int main() {
 int start = 0, end;
 string str;
 cout << "Enter a string to check that string is palindrome or not..." << endl;
 cin >> str;
 end = str.length()-1;
 while(start < end){
  if(str[start] != str[end]){
    cout << "❌";
    return 0;
  }
  start ++; // move forward
  end --;   // move backward
 }
 cout << "✅";

  return 0;
}