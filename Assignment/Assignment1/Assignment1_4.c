#include"Header.h"
int main()
{
int Number;
BOOL bRet;
printf("Enter a Number: \n");
scanf("%d",&Number);
bRet=checkDiv(Number);
if(bRet==True)
printf("Entered no is Divisible by 5 \n");
else
printf("Entered no is NOT Divisible by 5 \n");
return 0;
}
