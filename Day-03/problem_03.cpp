
// Given an array of integers, calculate the sum of all its elements.

#include<iostream>

using namespace std;

void array_data( int arr[], int n) {
  for( int i=0; i<n; i++){
    cout << "Enter the " << i << " element : ";
    cin >> arr[i];
  }
}

int array_sum (int arr[], int n) {
  int sum = 0;
  if(n == 0)
    return 0;
    else
    for(int i=0; i<n; i++){
      sum+=arr[i];
    }
    return sum;
}

int main () {
   int size;
 cout << "Enter te size of an array : " ;
 cin >> size;
 int arr[size];
 array_data(arr,size);
 int sum = array_sum (arr, size);
 cout << "sum of all element : " << sum;
  return 0;
}