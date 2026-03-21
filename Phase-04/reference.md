# Day 04 – Reference

Date: 24 February 2026

## Objective:  ( very very important )
      1> Intro...
      2> properties of references
      3> Function parameter
      4> L-values(&) & Rvalues(&&)


## /////////////////////////////////////////////////////

# Intro : A reference in C++ is a variable that acts as an alias for another variable. It is created by using the ampersand (&) symbol during declaration. Once a reference is initialized, it cannot be changed to refer to another variable.

#  Properties of References:

  1> Must Be Initialized:= 
    A reference must be assigned a valid variable at the time of declaration.
  2> Cannot Be NULL:=
    References cannot hold NULL    values; they must always refer to a valid variable.
  3> Cannot Be Changed:=
    After initialization, a reference cannot be made to refer to a different variable

# Function parameter : 
  Function parameters can be
  i> pass-by-value  (function receives a copy of the data)
  ii> pass-by-reference  (function receives a reference to the original data.)
  
  ## Issues with Passing by Value
      1. Changes Are Not Reflected Outside the Function
      2. Performance Issues with Large Data Structures
          << When large objects (e.g., strings, arrays, or custom data structures) are passed by value, the entire object is copied. This can lead to significant memory and time overhead.>>
  ## Solving issues with references ( & )
       1. Changes Are Reflected Outside the Function
 NOTE: 2. But, it can lead to unintended side effects if the function modifies the original data.
  problem of 2 is solving bu "const" keyword is often used .

# L-values(&) & Rvalues(&&) references
  
  int x = 10; // very good
  int x = 10+20; // also very good
BUt,
  int &x = 5; // invid: '3' is an R value here x take a valid address

Note : ==============
  A const reference allows binding to both L-values and R-values. It ensures the referenced object is immutable within the scope of the reference.

 ## R-Value References (&&)

R-value references, denoted by &&, allow functions to modify temporary objects (R-values). They provide a way to work with temporary data without unnecessary copies.

## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## 
Approach to solving questions involving References in C++

When solving coding questions related to references in C++, there are a few key things to keep in mind:

  1> Understand the difference between references and pointers. A reference is an alias for an existing variable, whereas a pointer holds the memory address of a variable.
  2> Remember that once a reference is initialized, it cannot be made to refer to a different object.
  3> Be aware of the advantages and disadvantages of using references. For example, references can improve code readability and make it easier to work with large or complex data structures. However, they also can also make your code more difficult to understand if used improperly.
  4> Pay attention to the problem statement and constraints. Make sure you understand the requirements of the problem and how references can be used to solve it.
  5> Write clear, readable, and well-commented code. This will help you and others understand the logic behind your solution, and make it easier to debug if necessary.
  6> Test your code thoroughly before submitting, using sample inputs as well as edge cases. This will help you catch any bugs or errors that you might have missed during the development process.

