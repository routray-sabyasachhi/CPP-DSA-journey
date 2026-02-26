
// Count the zeros

#include<iostream>

using namespace std;

void array_element(int arr[], int n) {
   for( int i=0; i<n; i++){
    cout << "Enter the " << i+1 <<" Element : ";
    cin >> arr[i];
   }
}

int count_zero(int arr[], int n) {
  int count = 0;
  for (int i=0; i<n; i++){
     if(arr[i] == 0)
     ++count;
     }
  return count;
}

int main () {
int size;
  cout <<" Enter the size of an array : ";
  cin >> size;
  int arr[size];
  array_element(arr,size);
  int count = count_zero(arr,size);
  cout << "No of zero's : " << count ;
  return 0;
}