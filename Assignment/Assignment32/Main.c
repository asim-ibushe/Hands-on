#include"Header.h"
int main()
{
UINT num=0;
printf("Enter any number:");
scanf("%d",&num);
if(ChkBit(num)==True)
{
printf("correct\n");
}
else
{
printf("False\n");
}
return 0;
}
