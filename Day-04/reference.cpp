
#include <iostream>

using namespace std;

void fun1(int &a) { // a is a reference to the argument passed
    a = 20; // This will change the value of the argument passed to fun1
    cout << "Value of a in fun1: " << a << endl; // Output: Value of a in fun1: 20
}
void name_read(const string &name) { // name is a reference to the argument passed and const keyword allows only read access to the argument
    cout << "Name: " << name << endl; // Output: Name: sabyasachi
}

void editAndPrint(string &&str){
    str += " - Edited"; // This will change the value of the argument passed to editAndPrint
    cout << "Edited String: " << str << endl; // Output: Edited String: Welcome Sabyasachhi to C++ programming - Edited
}

int main() {
    int x;
    int &y = x; // y is a reference to x
    y = 10; // This will change the value of x to 10
    cout << "Value of x: " << x << endl; // Output: Value of x: 10
    fun1(x); // Pass x by reference to fun1
    cout << "Value of x after fun1: " << x << endl; // Output: Value of x after fun1: 20

    // pass by reference can be solved by using const keyword which allows anly read access to the argument passed to the function
    string str = "sabyasachhi";
    name_read(str);

    // pass by reference can be solved by using rvalue reference which allows only write access to the argument passed to the function
    string str2 = "Welcome Sabyasachhi to C++ programming";
    editAndPrint(std::move(str2)); // Pass str2 by rvalue reference to editAndPrint
    cout << "Original String: " << str2 << endl; // Output: Original String: sabyasachhi
    return 0;
}