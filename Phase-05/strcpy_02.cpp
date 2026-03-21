
/*
strcpy(string copy)
The strcpy function copies the content of one string into another.

- strcpy copies characters, including the null terminator, from the source to the destination.
- Ensure the destination array has enough space to hold the source string and the null terminator.

*/
#include<iostream>
#include<cstring>
using namespace std;

void string_copy(char str[], char str2[]){
  int i = 0;
  do{
    str[i] = str2[i];
    i++;
  }while(str2[i] != '\0');
  str[i] = '\0';   // to avoid garbage value printed after the copy of string so it is writing
}

int main() {
  char str[10];
 //  char *str1 = "sabya";
 //  strcpy(str , str1); // warning

 // predefined string copy function
    strcpy ( str , "sabya");
  cout << str << endl;

  char str2[] = "routray";
  string_copy(str,str2);
  cout << "string copy from user defined function : " <<str;
  return 0;
}