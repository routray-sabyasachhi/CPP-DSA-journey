# Day 04 – pointer

Date: 1 March 2026

## Objective: 
  1> Address operator(&) & Dereference operator(*)
  2> How to use a pointer
  3> Application
  4> normal parameter passing v/s pointer in function 
  5> pointer v/s Array
  6> 


////////////////////////////////////////////////////////
## 1>
&x returns the address of x, and *(&x) dereferences that address to give the value stored in x.

## 2>
 i> Define a pointer variable

ii> Assigning the address of a variable to a pointer using the unary operator (&) which returns the address of that variable.

iii> Accessing the value stored in the address using unary operator (*) which returns the value of the variable located at the address specified by its operand.

## 3>
i> we can modify values using pointer 

ii> Sizeof pointer (gives the size in bytes of a datatype ) int, double, string their sizes are the same because all pointers store memory address

iii> passing large objects(e.g.array or structures) by value which consumes more memory and processing time, pointers allowthese objects to be passes by reference efficiently

iv> Dynamic memory allocation -> we can allocate memory dynamically during runtime. Using like "new" and "delete".

v> Implementing data structures -> we can form linked list, trees, binary search trees(BSTs).

vi> System level programming -> pointer allow low-level-programming i.e. Direct memory access, Manipulating hardware resources
-> System level tasks like implementing operation systems or drivers often require pointer based operations.

vi> Returning multiple values -> it can return multiple values by modifying variables directly at their memory locations.

vii> Accessing aray elements

viii> passing array arguments

## 4>
 1> change at fuction are not reflected in actual variable
 2> Require to whole object copied 

 # But,

 1> The function can directly modify the original variable
 2> Avoiding copying of large objects

 # Key Advantages
1> Efficiency :- Passing pointers avoids the overhead of copying large objects, improving performance.
2> Direct Modification : Functions can directly modify the original variables or objects, which is essential in many programming scenarios.

## 5>
 We can assign the base address of an array to a pointer, but we can't assihn a pointer back to an array.
 e.g.  int arr[] = {1, 2, 3}; //
       int *ptr = arr; // ✅
       int arr = ptr; // ❌
Explanation: Arrays are not pointers, they represent a block of memory with a fixed size, and their base address cannot be changed. A pointer, on the other hand, is a variable that can point to different addresses.

*(arr+2) = *(2+arr) = arr[2] = 2[arr] // either can be access the array elements

Note :
Arrays are static in nature i.e. they cannot be resized according to the user requirements. but , Pointers are dynamic in nature i.e. memory allocated can be resized later.