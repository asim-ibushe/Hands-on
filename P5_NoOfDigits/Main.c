/*
Accept number from user and return the number of digits of that number.
e.g
input=27
output=2
input=157
output=3
input=1527
output=4
input=-57
output=2
input=-1000
output=4
Decimal Numbering system-base 10
*/
#include"Header.h"
int main()
{
int Number,iRet;
printf("Enter any Number:-\n");
scanf("%d",&Number);
iRet=reverse_Digits(Number);
printf("Number is Reversed: %d \n",iRet);
return 0;//successfully exit to OS
}
