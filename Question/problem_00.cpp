#include<iostream>
using namespace std;

int &fun() // This function returns a reference to an integer
{
   static int x = 10;
   return x;
}
int main()
{
   fun() = 30; // This will change the value of x from 10 to 30
   cout << fun();
   return 0;
}


/*

#include<iostream>
using namespace std;

int &fun()
{
   int x = 10;
   return x;
}
int main()
{
   fun() = 30;
   cout << fun();
   return 0;
}

solution: 
Since we return reference to a local variable, the memory location becomes invalid after function call is over. Hence it may result in segmentation fault runtime error.

*/