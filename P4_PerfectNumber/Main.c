//WAP which accept no from user and check whether that number is perfect no or not.
//Input-11
//Output-It is not a perfect Number
//Input-6
//Output-It is a perfect Number
//Input-28
//Output-It is a perfect Number

#include"Header.h"
int main()
{
int Number;
Bool bRet;
printf("Enter any Number :-\n");
scanf("%d",&Number);

bRet=ChkPerfect_original(Number);

if(bRet==True)
{
printf("\tYupp, A Perfect Number\n");
}
else
{
printf("\tEntered Number is Not a Perfect Number\n");
}
return 0;
}
