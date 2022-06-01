#include<stdio.h>
void Display1(int n)
{
if(n>=1)
{
printf("\t*");
n--;
Display1(n);
}
}

void Display2(int n)
{
if(n<=0)
{
return;
}
Display2(n-1);
printf("\t%d",n);
}

void Display3(int n)
{
if(n>0)
{
printf("\t%d",n);
Display3(n-1);
}
}

void Display4(int n)
{
static char alpha='A';
if(n>0)
{
printf("\t%c",alpha);
alpha++;
Display4(n-1);
}
}

void Display5(int n)
{
static char alpha='a';
if(n>0)
{
printf("\t%c",alpha);
alpha++;
Display5(n-1);
}
}

int main()
{
int iValue=0;
printf("Enter number:");
scanf("%d",&iValue);
printf("Output:");
Display5(iValue);
printf("\n");
return 0;
}
