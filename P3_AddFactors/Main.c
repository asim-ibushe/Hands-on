/*
Accept no from user and return the addition of the factors of that number.
Input-12
output-16

Input-10
output-8

Input-11
output-1
*/
#include"Header.h"

int main()
{
int Number;
int iRet;
printf("Enter any number :\n");
scanf("%d",&Number);

iRet=Sum_Factor(Number);

printf("Addition of All Factors of %d is %d \n",Number,iRet);
return 0;
}
