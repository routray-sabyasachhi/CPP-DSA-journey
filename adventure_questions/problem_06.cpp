
// Binary problem
/*
 convert binary to decimal  (case-1)
         decimal to binary  (case-2)
*/

#include <iostream>
#include<math.h>
using namespace std;

void decimalToBinary(){
        cout << "Enter the decimal number :";
        int num, i=0;
        cin>> num;
        int binary[32];
        while(num > 0){
                int rem;
                binary[i] = num % 2 ;
                num = num / 2 ;
                i++;
        }
        cout << " binary equivalent : ";
        for(int j=i-1;j>=0;j--){
                cout <<binary[j];
        }
}

#include <iostream>
#include <math.h>
using namespace std;

void binaryToDecimal(){
    int num;
    cout << "Enter the binary number: ";
    cin >> num;

    int decimal = 0;
    int i = 0;

    while(num > 0){
        int digit = num % 10;

        if(digit != 0 && digit != 1){
            cout << "Invalid input...";
            return;
        }

        decimal += digit * pow(2, i);

        num = num / 10;   // ✅ important step
        i++;
    }

    cout << "Decimal equivalent: " << decimal;
}

int main() {
  int choice;
  cout << "what you want ? " << "\n" << "1> Decimal to Binary \n2> Binary to decimal"<< endl;
  cout << "Enter your choice : ";
  cin >> choice;
  
  switch(choice) {
    case 1 : decimalToBinary();
            break;
    case 2 : binaryToDecimal();
            break;
    default : cout << "Invalid choice ";
  }
  return 0;
}
