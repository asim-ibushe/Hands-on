//Accept Number from user and display its binary representation.
#include<stdio.h>
void DisplayBinary(int iValue)
{
int size=7;
int iRem=0;
static int output[8];
if(iValue<0)
{
iValue= -iValue;
}
printf("\nBinary: (");
while(iValue!=0)
{
iRem=iValue%2;
iValue=iValue/2;
output[size]=iRem;
size--;
}
for(int i=0;i<8;i++)
{
printf("%d ",output[i]);
}
printf(")\n");
}
int main()
{
int Num=0;
printf("Enter any Integer No in Decimal Format:");
scanf("%d",&Num);
DisplayBinary(Num);
return 0;
}
