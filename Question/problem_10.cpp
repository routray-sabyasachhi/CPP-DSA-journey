
// Check whether two strings are anagram of each other | 

/*
Definition of Anagram :=

Two strings are considered anagrams if:

    Both strings have the same characters.
    The characters in both strings appear in the same frequency.

    approach 1 : sorting      (below solution)
    approach 2 : Count array
*/

#include<iostream>
#include<string>
using namespace std;

bool stringCompare(string s1, string s2){
    
    for(int i=0; i< s1.length(); i++){
        if(s1[i] != s2[i])
           return false;
    }
    return true;
}

string stringSorting(string str){
    char temp;
    // i am now using sorting algorithm
    for(int i=0; i< str.length(); i++){
        for(int j=i+1; j< str.length(); j++){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    // it is print due to check it actuallt sorted the string or not...
    cout << str << endl;
    return str;
}

bool isAnagram(string s1, string s2){
    int n1, n2;
    // Best to first check string length
    if(s1.length() != s2.length())
     return false;

     // two string sorting
     s1 = stringSorting(s1);
     s2 = stringSorting(s2);

     // Now two string compare and return result to main function
     bool result = stringCompare(s1, s2);
     return result;
}

int main() {
    string s1,s2;
    cout << " Enter two strings : ";
    cin >> s1 >> s2;
    if(isAnagram(s1,s2))
        cout <<  "strings are anagram ...";
    else
        cout << "Strings are not anagram...";
    return 0;
}