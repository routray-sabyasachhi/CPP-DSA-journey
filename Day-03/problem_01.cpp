
// We are tasked with determining whether a given array is sorted in ascending order.

#include <iostream>

using namespace std;

// here take data for array element
void array_data (int arr[], int n){
  for (int i=0; i<n; i++){
    cout << "Enter the " << i << " element : " ;
    cin >> arr[i];
  }
}
// this is the actual solution of the problem statement 
bool check_array(int arr[],int n) {
  bool result = true ;
  for(int i=1; i<n; i++){
    if(arr[i] < arr[i-1]){
      result = false;
      return result;
    }
    }
    return result;
}

int main() {
  int size;
  cout << "Enter the size of array : " ;
  cin >> size;
  int arr[size];
  array_data(arr,size);
  bool result = check_array(arr,size);
  cout << "\n" << result ;
    return 0;
}