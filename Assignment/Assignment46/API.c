#include<stdio.h>
//Write a recursive program which accept number from user and return summation of its digits.
int Sum(int iNo)
{
static int iSum=0;
if(iNo>0)
{
iSum+=(iNo%10);
Sum(iNo/10);
}
return iSum;
}

//Write a recursive program which accept string from user and count number of characters.
int Strlen(char *str)
{
if(str==NULL)
{
return -1;
}
static int cnt=0;
if(*str!='\0')
{
cnt++;
str++;
Strlen(str);
}
return cnt;
}

//Write a recursive program which accept number from user and return its factorial.
int Fact(int iNo)
{
static int fact=1;
if(iNo>1)
{
fact=fact*iNo;
iNo--;
Fact(iNo);
}
return fact;
}

//Write a recursive program which accept number from user and return its product of digits
int Mult(int iNo)
{
if(iNo<0)
{
iNo=-iNo;
}
static int product=1;
if(iNo!=0)
{
product*=(iNo%10);
iNo/=10;
Mult(iNo);
}
return product;
}

int main()
{
printf("Output:%d",Mult(523));
return 0;
}
