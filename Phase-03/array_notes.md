# Day 03 – Environment Setup

Date: 23 February 2026

## Objective:
    1> Basics
    2> Array declaration
    3> Accessing Array Elements
    4> Out-of-Bound Access in c++
    5> Types of array declaration (fixed-sized array, Dynamic-sized array)
    6> Array traversal (using normal loop , Range-based for loop)
    7> problem solving (Basics)







## //////////////// Array //////////////////////////

Basics :
  1> It is a group of variables of similar data types referred to by a single element.
  2> Its elements are stored in a contiguous memory location.
  3> The size of the array should be mentioned while declaring it.
  4> Array elements are always counted from zero (0) onward.
  5> Array elements can be accessed using the position of the element in the array.
  6> The array can have one or more dimensions.

-->   An array in C++ a collection of similar data items stored at contiguous memory locations and elements can be accessed randomly using indices of an array.  They can be used to store the collection of primitive data types such as int, float, double, char, etc of any particular type. To add to it, an array in C++ can store derived data types such as structures, pointers etc.

## -------------- Array Declaration -------------------
-> Types of array declaration examples have in program int his folder
-> e.g.
     arr[2] = {25,14,63};
     ☝️ showing error 

## --------------  Advantages of an Array : ---------------
  1> Random access of elements using the array index.
  2> Use of fewer lines of code as it creates a single array of multiple elements.
  3> Easy access to all the elements.
  4> Traversal through the array becomes easy using a single loop.
  5> Sorting becomes easy as it can be accomplished by writing fewer lines of code.

## -------------- Disadvantages of an array : ----------------
  1> Allows a fixed number of elements to be entered which is decided at the time of declaration. Unlike a linked list, an array in C is not dynamic.
  2> Insertion and deletion of elements can be costly since the elements are needed to be managed in accordance with the new memory allocation.

## --------------- Accessing array elements -----------------
  -> Array elements are accessed by using an integer index. Array index starts with 0 and goes till the size of the array minus 1.Its same as C language.
  -> The name of the array is also a pointer to the first element of the array.
 
    arr points to the address of the first element in memory.
    To access arr[2], the compiler calculates the address as:

 e.g.:   int arr[] = {10, 20, 30, 40};
         cout << arr[5] ; // Undefined behavior

    Address of arr[2] = Address of arr[0] + (2 * sizeof(int))

    For a 4-byte integer, this would result in an address offset of 8 bytes from arr[0].

NOTE : (Out-of-Bound Access in c++)

1 -> In C++, there is no automatic out-of-bounds checking for arrays. Accessing an index beyond the array size leads to undefined behavior. and can be leads to program crash
2 -> If an array is partially initialized, the uninitialized elements are set to 0 for statically allocated arrays.

## -------------------- Types of array Declaration ---------------------
 Arrays in C++ can be classified based on their size management: fixed-size arrays and dynamic-size arrays. Understanding the distinctions between these types helps programmers choose the right approach depending on the use case. Below, we'll explore these arrays in detail.
Fixed-Size Arrays

Fixed-size arrays have a pre-defined size that remains constant throughout the program. Once the size is decided, it cannot be altered. These arrays are memory-efficient in specific scenarios but can lead to wastage if the allocated size exceeds actual requirements.

Examples of Fixed-Size Arrays:

1. Local Arrays (Function Call Stack):

    Created within a function and stored in the function call stack.
    Temporary in nature; their memory is automatically released once the function execution completes.
    Commonly initialized using constants, user inputs, or variable values.

Syntax Example:

    int arr[10]; // Fixed-size array of 10 elements
    int n = 5;
    int arr2[n]; // Variable size determined at runtime

2. Heap-Allocated Fixed-Size Arrays:

    Allocated in the heap memory using pointers.
    Memory persists even after the function execution, as long as the pointer is valid.
    Provides flexibility to manage memory beyond the scope of a single function.

Syntax Example:

    int* arr = new int[10]; // Dynamically allocated fixed-size array
    delete[] arr;           // Manually deallocate memory


2. Dynamic-Size Arrays

Dynamic-size arrays can grow or shrink during runtime. This makes them highly flexible and efficient, especially in scenarios where the exact size of data is unknown beforehand.

Advantages:

    Flexible Memory Usage: Adapts to the required size without wasting memory.
    Space Efficiency: Avoids over-allocation compared to fixed-size arrays.
    Ease of Use: Automatic resizing saves time and reduces complexity.

Examples of Dynamic Arrays:

1. Vectors in C++ (STL):

    A part of the Standard Template Library (STL).
    Automatically manages memory by resizing itself as elements are added or removed.

Syntax Example:

    #include <vector>
    std::vector<int> vec; // Declare an empty dynamic array
    vec.push_back(10);    // Add an element
    vec.pop_back();       // Remove an element

2. Dynamic Arrays Using Pointers:

    Offers manual control over memory allocation and deallocation.
    Useful when precise memory management is required.

Syntax Example:

    int* arr;
    int size = 10;
    arr = new int[size]; // Allocate memory
    // Modify elements
    delete[] arr;       // Deallocate memory

## ------------ Array traversal ---------------------
1 > normal loop-based ----|
                          |----------- example given in array_basic.cpp
2 > Range-based ----------|                  (check it out)
         The loop variable x takes the value of each element in the array, one by one.
    The syntax for (int x : arr) automatically traverses all elements without needing explicit size calculation.

NOTE > During the array traversal modifying the element can be possible
     for (int &x : arr) { // Use reference (&) to avoid copying
        x *= 2; // Modify each element
    }











