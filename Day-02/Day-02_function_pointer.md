# Day 02 – 

Date: 22 February 2026

## Objective: (functions)
------------------------------------------------
1> Introduction
     a> pros
     b> Aspects of functions (Declaration, Defination, call)
     c> function prototype in c++
     d> Types of function (Library, user-defined)
2> Function parameter
     a> actual parameter
     b> formal parameter
3> Methods
     a> Call by value
     b> call by reference (c and c++ supports but java not)
     c> default argument in c++
     d> constant argument in c++
4> Rrcursion
     a> base condition (it means recursion should be terminated)
5> Function overloading
     a> same function name but diffrent parameter
6> pointer
     a> introduction
     b> application
     c> operators on pointer ( &, * )

------------------------------------------------
///////////////// Introduction /////////////////
------------------------------------------------     
** Functions are the main part of top-down structured programming. We break the code into small pieces and make functions of that code. Functions could be called multiple or several times to provide reusability and modularity to the C++ program. 
** Functions are also called procedures or subroutines or methods and they are often defined to perform a specific task. And that makes functions a group of code put together and given a name that can be called anytime without writing the whole code again and again in a program.
 
--------------- Advantages of Functions -----------------

** The use of functions allows us to avoid re-writing the same logic or code over and over again.
** With the help of functions, we can divide the work among the programmers.
** We can easily debug or can find bugs in any program using functions.
** They make code readable and less complex.

 
-------------- Aspects of a function -------------------

** Declaration: This is where a function is declared to tell the compiler about its existence.
**  Definition: A function is defined to get some task executed. (It means when we define a function, we write the whole code of that function and this is where the actual implementation of the function is done).
**  Call: This is where a function is called in order to be used.

 
------------- Function Prototype in C++ --------------

** The function prototype is the template of the function which tells the details of the function which include its name and parameters to the compiler. Function prototypes help us to define a function after the function call. 

 // Function prototype
return_datatype function_name(datatype_1 a, datatype_2 b);

 
---------------- Types of functions -----------------

** Library functions are pre-defined functions in C++ Language. These are the functions that are included in C++ header files prior to any other part of the code in order to be used.
E.g. sqrt(), abs(), etc.

 ** User-defined functions are functions created by the programmer for the reduction of the complexity of a program. Rather, these are functions that the user creates as per the requirements of a program.
    E.g. Any function created by the programmer.

------------------------------------------------
//////////////////// parameter /////////////////
------------------------------------------------ 

** Formal Parameters    :   the variable which is declared in the function is called a formal parameter or simply, a parameter. For example, variables a and b are formal parameters.
** Actual Parameters  :  The values which are passed to the function are called actual parameters or simply, arguments. For example, the values num1 and num2 are arguments.

e.g.:-

int sum(int a, int b); //formal parameter
 int main()
{
    int num1 = 5;
    int num2 = 6;
    sum(num1, num2);//actual parameters
}

A function doesn't need to have parameters or it should necessarily return some value.

---------------------------------------------------------
////////////////////// Methods /////////////////////////
---------------------------------------------------------
Now, there are methods using which arguments are sent to the function. They are,

 
-------------- Call by Value in C++ -------------------
Call by value is a method in C++ to pass the values to the function arguments. In the case of call by value the copies of actual parameters are sent to the formal parameter, which means that if we change the values inside the function that will not affect the actual values. 

 
--------------- Call by Reference in C++ ------------------------
Call by reference is a method in C++ to pass the values to the function arguments. In the case of call by reference, the reference of actual parameters is sent to the formal parameter, which means that if we change the values inside the function that will affect the actual values. 

Two special methods that are often used by programmers to have their program work efficiently are, 

------------ Default Arguments in C++ ----------------
Default arguments are those values which are used by the function if we don’t input our value as parameter. It is recommended to write default arguments after the other arguments. 
An example using default argument,

int sum(int a = 5, int b);
 
---------------- Constant Arguments in C++ ------------
** Constant arguments are used when you don’t want your values to be changed or modified by the function. The const keyword is used to make the parameters non-modifiable.
An example using constant argument,

int sum(const int a, int b);

---------------------------------------------------------
/////////////////// Function Overloading ////////////////
---------------------------------------------------------
Function overloading is a process to make more than one function with the same name but different parameters, numbers, or sequences. Now, there are a few conditions and any number of functions with the same name following any of these are called overloaded.
Same name but different data type of parameters
 
Same name but a different number of parameters 
Same name but different parameter sequence
Exact matches are always preferred while looking for a function that has the same set of parameters.

-------------------------------------------------------
//////////////////// Pointers /////////////////////////
--------------------------------------------------------
A pointer is a data type that holds the address of another data type. A pointer itself is a variable that points to any other variable. It can be of type int, char, array, function, or even any other pointer. Pointers in C++ are defined using the ‘*’ (asterisk) operator.

The ‘&’(ampersand) operator is called the ‘address of’ operator, and the ‘*’(asterisk) operator is called the ‘value at’ dereference operator. 

 ------------ Applications of a Pointer -----------------

Pointers are used to dynamically allocate or deallocate memory. Pointers are used to point to several containers such as arrays, or structs, and also for passing addresses of containers to functions.  Return multiple values from a function Rather than passing a copy of a container to a function, we can simply pass its pointer. This helps reduce the memory usage of the program. Pointer reduces the code and improves the performance.

---------------  Operations on Pointers ---------------
Address of Operator (&):

& is also known as the Referencing Operator. It is a unary operator. The variable name used along with the Address of operator must be the name of an already defined variable.

Using " & " operator along with a variable gives the address number of the variable.

 
------------ Indirection Operator ------------------

* is also known as the Dereferencing Operator. It is a unary operator. It takes an address as its argument and returns the content/container whose address is its argument. 

 
------------- Pointer to Pointer ----------------

Pointer to Pointer is a simple concept, in which we store the address of one pointer to another pointer. This is also known as multiple indirections owing to the operator’s name.  Here, the first pointer contains the address of the second pointer, which points to the address where the actual variable has its value stored. 


------------- Arrays and Pointers -------------------

Storing the address of an array into pointer is different from storing the address of a variable into the pointer. The name of an array itself is the address of the first index of an array. So, to use the (ampersand)& operator with the array name for assigning the address to a pointer is wrong. Instead, we used the array name itself.

