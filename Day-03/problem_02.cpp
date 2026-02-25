
// Count distinct element of an array

#include<iostream>

using namespace std;

void array_data( int arr[], int n){
  for(int i=0; i<n; i++){
    cout << "Enter the data of " << i+1 << " element : ";
    cin >> arr[i];
  }
}

int count_distinct( int arr[], int n){
  int count = 0;
 if(n == 0 )
 return 0;
 if ( n == 1 )
 return 1;
for (int i = 0; i < n; i++) {
        bool isDistinct = true; 

        for (int j = i - 1; j >= 0; j--) {
            if (arr[i] == arr[j]) { 
                isDistinct = false;
                break;
            }
        }

        if (isDistinct) {
            count++; 
        }
    }
    return count;
}

int main () {
 int size;
 cout << "Enter te size of an array : " ;
 cin >> size;
 int arr[size];
 cout << sizeof(arr) <<"\n"; // return the reserved memory in byte
 array_data(arr,size);
 int count = count_distinct(arr,size);
 cout << count ;
  return 0;
}