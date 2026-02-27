#include<iostream>

using namespace std;

int main(){
// example of array declaration
int ex1[]{2,5,9};  // This type of declaration possible
int num{5};  // num = 5;
int n;
cout << "enter the size of array :" ;
cin >> n;
int ex2[n]; // earlier c++ doesn't support this type of array declaration of latest c++ allow this

int ex3[8] = {12,58,25}; // ex3[8] = {12,58,25,0,0,0,0,0}

/////// normal loop array traversal
for (int i=0 ; i < 3 ;i++) {  // this is also array traversal
  cout << ex1[i] << " " ; // array element access through index
}
////// Range based arrayb traversal

for( int x :ex2){
  cout << x << "\n" ;
}
 delete []ex1; // manually delete array


int arr[5] = {1,2,3,4,5};
for (int &x : arr ){
  x+= 2; // this will change the value of array element as x is reference to array element
  }

  for (int x : arr){
    cout << x << " " ; // Output: 3 4 5 6 7
  }

 string ar[] = {"GFG", "C++ Course", "learning"};
    for (const string &s : ar) { // 's' is a const reference
        cout << s << "\n";
    }

















  return 0;
}