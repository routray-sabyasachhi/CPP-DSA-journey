# Day 05 – string

Date: 7 March 2026

## Objective: 
     1> Introduction
     2> Why strings are special
     3> Types of strings in c++
          i) C style strings in C++
              a) Defination
              b) Types of Initialization
              c) commonly used function in C
     4> String class in c++
     5> Pros of C++ strings
     6> String operations
           i) length() 
           ii) substr()
           iii) find()
     7> string comparison (lexicographically)
           i) == : Checks if two strings are equal.
           ii) < : Checks if one string is lexicographically smaller.
           iii) > : Checks if one string is lexicographically greater.
           iv) <=, >= : Additional comparison options.
     8> Reading a string with space
     9> String traversal
     10> string reversal
     11> string palindrome


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

NOTE :
-> strlen ignores the null character while calculating the length.
-> If the null terminator is missing, strlen may traverse unintended memory, causing incorrect results or runtime errors.

2> strcmp (string comparison) :

NOTE :
-> The strcmp function compares two strings lexicographically:
-> Returns 0 if both strings are equal.
-> Returns a negative value if the first string is smaller.
-> Returns a positive value if the first string is greater.

3> strcpy( string copy):
The strcpy function copies the content of one string to another.

NOTE :
-> strcpy copies characters, including the null terminator, from the source to the destination.
-> Ensure the destination array has enough space to hold the source string and the null terminator.

## string class in C++
The C++ string class (std::string) is part of the Standard Template Library (STL) and offers significant advantages over C-style strings. It eliminates many of the limitations and challenges associated with character arrays.

# Dynamic size management :
 std::string automatically manages memory, so no need to predefine size.
# Rich Operator support :
 Supports operators like +, <, >, <=, >= for concatenation and comparison.
# Iterator support :
 Provides begin() and end() iterators for use with STL algorithms.
# Easy Assignments
 String can be declared empty and assigned later.
# C-style conversion :
 c_str() converts a C++ string into a C-style string. 

 ## 6> String operations

 # length() : 
     find the length of the string excluding null terminator('\0').
 # concatinate by +
   concatinate two strings and "std::string" automatically handles memory allocation and resizing
 # substr(start_index, length)
    get the substring here lenth part is optional
 # find("string")
    find a substring and it return the first index of the first occurance.

## 8> Reading a string with space
 NOTE : The cin and readline() functions are the two primary methods for reading strings.

 # cin :
 -> it the simplestway to read a string from the console. But, it stops reading input at the first white space character(i.e. space, newline or tab), which can be a limitation when dealing with multi-word strings.
 
 # getline() to Read strings
 -> The getline() function provides a more robust way to read strings, It reads input untill it encounters a newline character('\n') or a specified delimeter.

# Using getline() with a custom Delimeter
-> The getline() function also allows you to specify a custom delimiter instead of the default newline character. This can be useful when reading data formatted with specific delimiters, such as commas or dollar signs.

## String traversal
problem : string_traversal.cpp
 i> Using range-based
 ii> Using iterators
 iii> Traversing using indices

NOTE :
  str.length() // provides the length of the string

  str::string class supports STL iterators
  -------------------------------------------
  str.begin() returns an iterator pointing to the first character.
  str.end() returns an iterator pointing past the last character.