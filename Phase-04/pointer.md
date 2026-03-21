# Day 04 – pointer

Date: 1 March 2026

## Objective: 
  1> Address operator(&) & Dereference operator(*)
  2> How to use a pointer
  3> Application
  4> normal parameter passing v/s pointer in function 
  5> pointer v/s Array
  6> NULL pointer
  7> Application of NULL in c++
  8> pointer arithmetic
  9> Dynamic memory allocation
  10> Questions


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

## 6> 
-> In C++, NULL is a symbolic constant used to represent a null pointer, which means a pointer that does not point to any valid memory address. It is typically defined as 0 and is used to indicate that a pointer is intentionally not associated with any memory location.

-> Assigning NULL to a pointer helps prevent accidental access to invalid memory and improves the safety and reliability of the program.

## 7:-> Application of NULL in c++
-> NULL is used to show that a pointer is not pointing to any valid memory address.

-> Functions return NULL to indicate an invalid result or a failure condition.

3> NULL is used in data structures like linked lists and trees to represent an empty node or the end of the structure.

# important points
-> A null pointer is treated as false in conditional statements, while any non-NULL pointer is treated as true

-> NULL is a generic constant and can be assigned to any type of pointer, such as int*, or char*.

-> Always initialize pointers with NULL when declaring them, especially if they won't immediately point to valid memory.

-> Always heck if a pointer is NULL before dereferencing it to avoid segmentation faults or undefined behaviour.

## 8 -> pointer arithmetic
pointer key operations include:

1> Incrementing a pointer (ptr++)
2> Decrementing a pointer (ptr--)
3> Adding or subtracting an integer to/from a pointer
   (ptr + i , ptr - i) // integer or identity
4> subtracting two pointerrs
   ( ptr2 - ptr1) 
   ## Note
   These operations are not performed in terms of bytes,
    but, in terms of the size of the data type the pointer is pointing to.

( ptr + 3 ) :=>  Adress(ptr) + 3 * (sizeof integer)

## 9-> Dynamic memory allocation
Dynamically allocated memory is allocated on Heap, and non-static and local variables get memory allocated on Stack.

# It allows programmer to :
1> Allocate memory to runtime on the heap
2> Deallocate memory when it's no longer needed.

This allocation is useful when the required memory size can't be determined during compile time

# function for dynamic allocation
1> new : Allocates memory in c++
2> delete : Deallocates memory in c++
3> malloc and calloc : Legacy C-style functions used for memory allocation

new :=
------------
pointer_variable = new data-type;

and by initialize
pointer-variable = new data-type (value); 

Allocate a block of memory:
pointer_variable = new data_type[size];
 // size specifies the number of elements in an array
 