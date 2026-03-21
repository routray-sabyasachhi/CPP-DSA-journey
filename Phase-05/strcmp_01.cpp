
/*
strcmp (string comparison) :
-------------------------------
-> The strcmp function compares two strings lexicographically:

- Returns 0 if both strings are equal.
- Returns a negative value if the first string is smaller.
- Returns a positive value if the first string is greater.

*/

#include<iostream>
#include<cstring>
using namespace std;

int string_compare(char first[] , char second[]){
  int status = 0;
  int i=0;
  while (first[i] != '\0' && second[i] != '\0'){
    if(first[i] != second[i]){
      return first[i] - second[i];
    }
    i++;
  }
  return first[i] - second[i];
}

int main() {
  char str1[] = { 's','a','b','y','a','\0'};
  char str2[] = { 's','a','b','y','a','\0'};
  char str3[] = { 'a','a','b','y','a','\0'};
  char str4[] = { 't','a','b','y','a','\0'};
  // using predefined function strcmp()

  // equal string
  cout << "This is finding by predefined method (equal): " << strcmp(str1,str2) << endl;
 // str1 > str3 
 cout << "This is finding by predefined method  (str1 > str3) : " << strcmp(str1,str3) << endl;
 
 // str1 < str4
 cout << "This is finding by predefined method (str1 < str4) : " << strcmp(str1,str4) << endl;

 // user defined function of strcmp
 
int status = string_compare(str1,str2);
cout << status << endl;
status = string_compare(str1,str3);
cout << status << endl;
status = string_compare(str1,str4);
cout << status << endl;

  return 0;
}