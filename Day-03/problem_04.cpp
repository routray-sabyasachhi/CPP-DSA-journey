
// Given an array, the task is to find average of that array.

#include<iostream>

using namespace std;

void array_element(int arr[], int n) {
   for( int i=0; i<n; i++){
    cout << "Enter the " << i+1 <<" Element : ";
    cin >> arr[i];
   }
}
float array_avg ( int arr[], int n){
  int sum = 0;
  // first find the sum of ech element
  for (int i=0;i<n; i++){
    sum += arr[i];
  }

  return sum/(float)n;
}

int main(){
  int size;
  cout <<" Enter the size of an array : ";
  cin >> size;
  int arr[size];
  array_element(arr,size);
  float avg = array_avg(arr,size);
  cout << "average : " << avg;
  return 0;
}