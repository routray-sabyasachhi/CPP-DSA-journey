// Search an element if present then return index of first occurance and if not present then return -1

#include<iostream>

using namespace std;

void array_element(int arr[], int n) {
   for( int i=0; i<n; i++){
    cout << "Enter the " << i+1 <<" Element : ";
    cin >> arr[i];
   }
}

int is_present(int arr[], int n,int key) {
  for(int i=0; i<n; i++){
    if(arr[i] == key)
    return i;
  }
  return -1;
}

int main () {
int size,key;
  cout <<" Enter the size of an array : ";
  cin >> size;
  int arr[size];
  array_element(arr,size);
  cout << "Enter the element you want to search : ";
  cin >> key;
  int ans = is_present(arr,size,key);
  if(ans != -1)
   cout << "Searching value present in " << ans << " index.";
  else
   cout << "Searching value not present : " << -1 ;
  return 0;
}