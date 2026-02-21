# include <iostream>
using namespace std;

int main() {
   int num;
   cout << "Enter a number: ";
   cin >> num;
   if (num > 0) {
      cout << "The number is positive." << endl;
   } else if (num < 0) {
      cout << "The number is negative." << endl;
   } else {
      cout << "The number is zero." << endl;
   }

   // Using a switch statement to determine the type of number
   switch (num) {
      case 0:  // case must always be a constant expression
         cout << "The number is zero." << endl;
         break;
      default:
         if (num > 0) {
            cout << "The number is positive." << endl;
         } else {
            cout << "The number is negative." << endl;
         }
   }
   for(int i=0; i<num ; i++) {  // Loop to print numbers from num down to 1
     if(i == num) {
        cout << "Counting down from " << num << ": ";
        break;
     }
     else if(i == 6) {
         cout << "Halfway there! ";
         continue;
     }
     else
      cout << i << " ";
   
   }
   return 0;
}