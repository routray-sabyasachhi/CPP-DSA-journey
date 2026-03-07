# Day 04 – string

Date: 7 March 2026

## Objective: 
     1> Introduction
     2> Why strings are special
     3> Types of strings in c++
          i) C style strings in C++
              a) Defination
              b) Types of Initialization
              c) commonly used function in C


///////////////////////////////////////////////////////
## Introduction
A string is a sequence of characters, such as "sabyasachhi" or "routray". While it can be viewed as an array of characters, C++ treats strings specially due to their unique properties.

## Why Strings Are Special

Strings differ from standard arrays (like integer or floating-point arrays) in a few ways:

->   Small Character Set: Strings use a limited set of characters (A-Z, a-z, plus special/control characters). Originally ASCII (128 chars), later extended to 256, making string handling easier.
->  No Separators Needed: Unlike arrays, string characters are contiguous and don’t require commas or spaces. Example: "GFG" is directly 'G', 'F', 'G'.
->  Internal Representation: Characters are stored as integers (e.g., 'A' = 65, 'a' = 97), allowing easy comparisons and alphabetic operations.

## Types of Strings in C++

->  C-Style Strings: C-Style strings are character arrays ending with a null character \0, e.g., char str[] = "hello";.
->   C++ String Class: The std::string class from STL offers a more intuitive and powerful way to work with strings.

# C style string in c++
-> In C, a string is a character array terminated by a null character \0, making its size one more than the number of characters. C++ also supports this, and the compiler automatically adds \0 when initializing the array.

# Initializeing a string in c++
1> char str[] = "sabya";
2> char str[10] = "Routray";
3> char str[] = { 'S','a','b','y','a','\0'};

# Commonly used functions in C 
header file  ( #incluse <string.h> )
1> strlen : Calculate the length of the string by counting characters untill it encounters \0.