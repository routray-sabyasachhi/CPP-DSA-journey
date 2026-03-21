
// Type of string reading

#include<iostream>
#include<limits>
using namespace std;

int main() {
    string name;

    cout << "Enter your name : ";
    cin >> name;  // reads until whitespace
    cout << name << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');   // clear leftover newline from buffer

    cout << "Re enter your name : ";
    getline(cin, name);   // reads full line including spaces
    cout << "Your full name is " << name;

    return 0;
}