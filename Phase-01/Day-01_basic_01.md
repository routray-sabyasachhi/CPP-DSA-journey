# Day 01 – 

Date: 21 February 2026

## Objective:
1> Introduction (what, why, how, Pre-process commands or header files) , 
2> Keywords
3> Identifiers
4> Constants
5> String Literal
6> Symbols & Operators
7> Comments (single line(//) & multi line (/*multiline comment*/))
8> variable (Local variable and Global bariable and rule for declaration ) 
9> Operators (Types of operator )


--------------------Introduction------------------

** What is C++?

    C++ was developed by Bjarne Stroustrup, as an extension to the C language.

    Despite being an 80s creation, C++ has been a popular programming language throughout these years.

    C++ is a cross-platform language that can be used to create high-performance applications and software systems.

    C++ is very close to the hardware making it comparatively easy for programmers to give the instructions directly to the system without any intermediary giving programmers a high level of control over system resources and memory.

 
** Why should we learn C++/ Features of C++?

    C++ is one of the world's most popular programming languages.

    In today's operating systems, GUIs, and embedded systems, C++ is widely used.

    It is one of the most popular programming languages for its object-orientedness. C++ is an object-oriented programming language that gives a clear structure to programs and allows code to be reused, lowering development costs.

    With C++, you can develop applications or heavy games that can run on different platforms.

    As C++ is close to other programming languages such as C# and Java, which makes it easy for programmers to switch to C++ or vice versa while it is actually very easy to learn.

 
** How is it different from C?

    The syntax of C++ is almost identical to that of C, as C++ was developed as an extension of C.

    In contrast to C, C++ supports classes and objects, while C does not.

** Pre-processor commands/ Header files

It is common for C++ programs to include many built-in elements from the standard C++ library, including classes, keywords, constants, operators, etc. It is necessary to include an appropriate header file in a program in order to use such pre-defined elements.

#include <iostream>  (before 2011 it was witten as <iostream.h> but not wrote <using namespace std; > but after 2011 it must written because <iostream> fileke <namespace> ke andar <cin & cout > declared hai.) was the line put to include the header file iostream.  The iostream library helps us to get input data and show output data. The iostream library also has many more uses and error facilities; it is not only limited to input and output.

Header file are both system defined and user defined. To know more about header files, go to the documentary here, https://en.cppreference.com/w/cpp/header. 

** 
    Keywords

Keywords are reserved words that can not be used elsewhere in the program for naming a variable or a function. They have a specific function or task and they are solely used for that. Their functionalities are pre-defined. 

One such example of a keyword could be return which is used to build return statements for functions. Other examples are auto, if, default, etc.

There is a list of reserved keywords which cannot be reused by the programmer or overloaded.


 ** Identifiers

Identifiers are names given to variables or functions to differentiate them from one another. Their definitions are solely based on our choice but there are a few rules that we have to follow while naming identifiers. One such rule says that the name can not contain special symbols such as @, -, *, <, etc.

C++ is a case-sensitive language so an identifier containing a capital letter and another one containing a small letter in the same place will be different. For example, the three words: Code, code, and cOde can be used as three different identifiers.

** Constants

Constants are very similar to a variable and they can also be of any data type. The only difference between a constant and a variable is that a constant’s value never changes.

** String Literal

String literals or string constants are a sequence of characters enclosed in <double quotation>marks. Escape sequences are also string literals.

** Symbols and Operators

Symbols are special characters reserved to perform certain actions. Using them lets the compiler know what specific tasks should be performed on the given data. Several examples of symbols are arithmetical operators such as +, *, or bitwise operators such as ^, &.

** Variable 
Declaration

We cannot declare a variable without specifying its data type. The data type of a variable depends on what we want to store in the variable and how much space we want it to hold. The syntax for declaring a variable is simple:

data_type  variable_name;

OR

data_type  variable_name = value;

The tutorial will go over data types later on. They will be dealt with in great detail.

 
-- Naming a Variable

There is no limit to what we can call a variable. Yet there are specific rules we must follow while naming a variable:

    A variable name in C++ can have a length of range 1 to 255 characters

    A variable name can only contain alphabets, digits, and underscores(_).

    A variable cannot start with a digit.

    A variable cannot include any white space in its name.

    Variable names are case sensitive

    The name should not be a reserved keyword or any special character. 

 
-- Variable Scope

The scope of a variable is the region in a program where the existence of that variable is valid. Based on its scope, variables can be classified into two types:

 
-- Local variables:

Local variables are declared inside the braces of any function and can be assessed only from that particular function. 

 
-- Global variables:

Global variables are declared outside of any function and can be accessed from anywhere.


Explanation: A local variable a was declared in the main function, and when printed, gave 10. This is because, within the body of a function, a local variable takes precedence over a global variable with the same name. But since there was no variable declared in the func function, it considered the global variable a for printing, and hence the value 5.

 A variable, as its name is defined, can be altered, or its value can be changed, but the same is not true for its type. If a variable is of integer type, it will only store an integer value through a program. We cannot assign a character type value to an integer variable. We can not even store a decimal value into an integer variable.

 ** C++ Operators

Special symbols that are used to perform actions or operations are known as operators. They could be both unary or binary.

For example, the symbol + is used to perform addition in C++ when put in between two numbers, so it is a binary operator. There are different types of operators. They are as follows:

 
----------- Arithmetic Operators  ------------

Arithmetic operators are used to perform mathematical operations such as addition, subtraction, etc. They could be both binary and unary. A few of the simple arithmetic operators are

 Operation         Description 
 ------------------------------------
  a + b      ->  Adds a and b
  a - b      ->  Subtracts b from a
  a * b      ->  Multiplies a and b
  a / b      ->  Divides a by b
  a % b      ->  Modulus of a and b
  a++        ->  Post increments a by 1
  a--        ->  Post decrements a by 1
  ++a        ->  Pre increments a by 1
  --a        ->  Pre decrements a by 1


 
-------------- Relational Operators ----------------

Relational operators are used to check the relationship between two operands and to compare two or more numbers or even expressions in cases. The return type of a relational operator is a Boolean that is, either True or False (1 or 0).

 

Operator           Description
-------------------------------------------
  >         ->    Greater than
  <         ->    Less than
 >=         ->    Greater than or equal to
 <=         ->    Less than or equal to
 ==         ->    Is equal to
 !=         ->    Is not equal to
 
 
--------------  Logical Operators  ---------------

Logical Operators are used to check whether an expression is true or false. There are three logical operators i.e. AND, OR, and NOT. They can be used to compare Boolean values but are mostly used to compare expressions to see whether they are satisfying or not. 

operator                Description
---------------------------------------
  AND(&&)        ->     it returns true when both operands are true or 1.
  OR (||)        ->     it returns true when either operand is true or 1.
  NOT(!)         ->     it is used to reverse the logical state of the operand and is true when the operand is false.

 
------------- Bitwise Operators ------------------

 A bitwise operator is used to perform operations at the bit level. To obtain the results, they convert our input values into binary format and then process them using whatever operator they are being used with. 

 

Operator               Description
--------------------------------------------------------
  &          ->        Bitwise AND
  |          ->        Bitwise OR
  ^          ->        Bitwise XOR
  ~          ->        Bitwise Complement
  >>         ->        Shift Right Operator
  <<         ->        Shift Left Operator

 
----------- Assignment Operators ---------------------

Assignment operators are used to assign values. We will use them in almost every program we develop.

Operator               Description
----------------------------------------------------------
   =          ->      It assigns the right side operand value to the left side operand.
   +=         ->      It adds the right operand to the left operand and assigns the result to the left operand.
   -=         ->      It subtracts the right operand from the left operand and assigns the result to the left operand.
   *=         ->      It multiplies the right operand with the left operand and assigns the result to the left operand.
   /=         ->      It divides the left operand with the right operand and assigns the result to the left operand.

 
Operator Precedence and Associativity

 **  Operator precedence

-- It helps us determine the precedence of an operator over another while solving an expression. Consider an expression a+b*c. Now, since the multiplication operator's precedence is higher than the precedence of the addition operator, multiplication between a and b is done first and then the addition operation will be performed.

**  Operator associativity

-- It helps us to solve an expression; when two or more operators having the same precedence come together in an expression. It helps us decide whether we should start solving the expression containing operators of the same precedence from left to right or from right to left.
-- The table containing the operator precedence and operator associativity of all operators can be found here. C++ Operator Precedence - cppreference.com.

----------  C++ Manipulators ---------------------
In C++ programming, language manipulators are used in the formatting of output. These are helpful in modifying the input and the output stream. They make use of the insertion and extraction operators to modify the output.

Manipulators              Description
------------------------------------------------------
  endl           ->       It is used to enter a new line with a flush.
 setw(a)         ->       It is used to specify the width of the output.

**   setprecision(a)
It is used to set the precision of floating-point values.

setbase(a)
It is used to set the base value of a numerical number.
