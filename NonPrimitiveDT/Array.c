/*
Array-It is a Data Type wich holds multiple homogenious values under single name.
Problem Statement: Accept n numbers from user and perform addition of those numbers.
In this problem statement the value of n may vary according user requirement.
Input: value of n=5
numbers are(5,3,7,1,2)
Output: Addition=18
Algo-
START
1.accept the value of n
2.Dynamic memory allocation for array size referencing user input.
3.accept all no to store in array
4.Perform the addition
5.Display the computed addition on the screen
END
*/
#include<stdio.h>
#include<stdlib.h>
int sumNumbers(int arr[],int size)
{
int iSum=0;
for(int i=0;i<size;i++)
{
iSum+=arr[i];
}
return iSum;
}

int main()
{
int *ptr=NULL;//use of pointer
int count=0;
printf("Enter count of numbers:");
scanf("%d",&count);
//Dynamic memory allocation using malloc function
ptr=(int *) malloc(4*count);//default return value is void *(This is Explicit type casting)//BRK systemCall
printf("Enter the Numbers in array:\n");
for(int i=0;i<count;i++)
{
	scanf("%d",&ptr[i]);
}
printf("Entered Numbers are as follow:\n");
for(int i=0;i<count;i++)
{
	printf("%d\t",ptr[i]);
}
printf("\nAddition of all numbers:\t%d",sumNumbers(ptr,count));//passing base address and total element as a parameter
printf("\n");
return 0;
}
