#include<stdio.h>
/*
Accept no from user and count no of even digits from that no
2517
output=1
4682
output=4
351
output=0
4021
output=3
*/

int countDigits(int iNO)//shop
{
if (iNO==0)
return 1;

int icnt=0;
while(iNO!=0)
{
int rem;
rem=iNO%10;
if(rem%2==0)
{
icnt++;
}
iNO=iNO/10;
}
return icnt;
}

int main()
{
int iValue=0;
int iRet=0;
printf("--Application to count Even No of Digits--\n");
printf("Enter a Number :\n");
scanf("%d",&iValue);
iRet=countDigits(iValue);
printf("No of EvenDigits are :%d\n",iRet);
return 0;
}
