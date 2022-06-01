#include<stdio.h>
void Display1()
{
static int n=5;
if(n>=1)
{
printf("\t*");
n--;
Display1();
}
}

void Display2()
{
static int n=1;
if(n<=5)
{
printf("\t%d",n);
n++;
Display2();
}
}

void Display3()
{
static int n=5;
if(n>=1)
{
printf("\t%d",n);
n--;
Display3();
}
}

void Display4()
{
static char alpha='A';
if(alpha<='F')
{
printf("\t%c",alpha);
alpha++;
Display4();
}
}

void Display5()
{
static char alpha='a';
if(alpha<='f')
{
printf("\t%c",alpha);
alpha++;
Display5();
}
}
int main()
{
printf("Output:");
Display5();
printf("\n");
return 0;
}
