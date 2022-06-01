#include<stdio.h>//used for io functions

/*by using the concept of typedef we can define new datatype in c & c++.
The syntax of typedef is like: typedef datatype new datatype;
In our program we use the above syntax as
typedef int BOOLEAN;
In the above syntax we create new datatype as a boolean wich is similar as int.
by using the typedef our program becomes more readable.
## user defined macro ##
if we use macro in our program then it becomes more readable.
The name of macro gets replaced with its value by the preprocessor.
In our program we use two macros as #define True 1	#define False 0
In our program after preprocessing the True word gets replaced with 1 and False word gets replaced with 0.
*/
typedef int BOOLEAN;  //new datatype BOOLEAN treated as int
#define True 1 //user defined macro True
#define False 0

BOOLEAN ChkEvenOdd(int); //prototype of ChkEvenOdd function

