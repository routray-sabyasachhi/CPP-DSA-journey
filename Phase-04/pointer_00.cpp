
// dt- 02/03/2026
// finding the sizeof array by sizeof() 
/*
Explanation :=

    In the "main" function, the array a has 5 elements.
    The size is correctly calculated in main using sizeof(a) / sizeof(int) because a is treated as an array there.
    When the array is passed to "f(int a[])", it decays into a pointer.
    sizeof(a) inside this function gives the size of the pointer, not the array, so the size calculation becomes incorrect.
    In "f(int a[], int N)", the array size is passed explicitly as N.
    This is the correct way to handle arrays when their size is needed inside a function.

Common Pitfalls and Recommendations :=

    Inside a function, using "sizeof" on an array gives incorrect results because the array is treated as a pointer.
    This happens because arrays decay into pointers when passed to functions.
    Due to this decay, the actual size information of the array is lost.
    Always pass the array size as an extra parameter to the function.
    Avoid using sizeof on array parameters to find the array size.
*/

#include <iostream>
using namespace std;

void f(int a[]) {
    int n = sizeof(a) / sizeof(int); // Incorrect size calculation
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

void f(int a[], int N) {
    int n = N; // Correct size passed explicitly
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int); // Correct size calculation in main
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';

    f(a);    
    f(a, n); 
    return 0;
}
