
// find the length of the string by using predefined and user defined function

#include <iostream>
#include <cstring>
using namespace std;

int string_length(char str[]) {
  int count = 0;
  int i=0;
  while(str[i] != '\0'){
    count++;
    i++;
  }
  return count;
}

int main() {

  char str[] = { 's','a','b','y','a','\0'};
  // using predefined function strlen()
  cout << "This is finding by predefined method : " << strlen(str) << endl;
  
  // using user defined method
  int length = string_length(str);
  cout << "This is finding by user defined method : " << length << endl;
  return 0;
}