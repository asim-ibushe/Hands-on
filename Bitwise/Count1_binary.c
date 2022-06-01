#include<stdio.h>
int count1_Bin(int iValue)
{
if(iValue<0)
{
iValue= -iValue;
}
int rem=0,count=0;
while(iValue!=0)
{
rem=iValue%2;
if(rem==1)
{
count++;
}
iValue=iValue/2;
}
return count;
}

int main()
{
int Num=0;
printf("Enter any Integer No in Decimal Format:");
scanf("%d",&Num);
printf("\nNumber of 1's in Binary Number:%d\n",count1_Bin(Num));
return 0;
}
