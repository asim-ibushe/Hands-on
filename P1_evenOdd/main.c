/*Accept no from user and check no is even or odd*/
/*
Algorithm
start
step1. Accept number from user I
step2. divide accepted no with 2 and store remainder of div in IAns variable
step3. If the result is 0: Then return Even Othervise return Odd
End

In above algorithm we just mention the steps that we want to follow while writing a program.
In the algoritm there is no need to use any technical word. Algorithm should be written in such a way ,it should be implemented in any programming language.
Commercial way to write any programme or Project:
1. we have to design our project in such a way that it should be modular in nature.
2. we can divide our project based on the func.
3. we can create atleast three files such as #main.c #Helper.c #Header.h
If we create user defined header file then it should be included in our c program by using the #include systax
If the header file is available in same folder then we have to mention the name of that header file in double quotes. 
*/

#include "Header.h"

//return 1 if even else return 0
int main(void)//entry point function 
{
	int I=0;
	printf("Enter a Number: \n");
	scanf("%d",&I);
	BOOLEAN IAns;
	IAns=ChkEvenOdd(I); //ChkEvenOdd(22)
	if (IAns== True)
	{
	printf("Number is Even \n");
	}
	else
	{
	printf("Number is Odd \n");
	}
	return 0; //return value of main 0:success 1:Error -1:eronious exit
}

/* 
Terminal:
gcc main.c Helper.c -o myexe
./myexe
Output:Enter a Number:
22
Number is Even
*/
//Execution flow of the given program OS->main()->ChkEvenOdd()->main()->OS
