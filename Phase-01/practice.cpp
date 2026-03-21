// standard calculator program using switch case

#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
while(true)
{
    cout << "Enter operator either + or - or * or / or e(exit) : ";
    cin >> op;
   if(op == 'e'){
    return 0;
   }
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2<< endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2<< endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2<< endl;
            break;

        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2<< endl;
            else
                cout << "Error! Division by zero.";
            break;

        default:
            cout << "Error! Operator is not correct";
            break;
    }
}

    return 0;
   
}