//accept two no from user and return X^Y
#include<stdio.h>

int PowerI(int x,int y)
{
int product=1;
while(y>0)
{
product=product*x;
y--;
}
return product;
}

int PowerR(int x,int y)
{
static int product=1;
if(y>0)
{
product=product*x;
y--;
PowerR(x,y);
}
return product;
}

int main()
{
int no1=0,no2=0;
printf("Enter first no:");
scanf("%d",&no1);
printf("Enter second no:");
scanf("%d",&no2);
printf("Result:%d\n",PowerR(no1,no2));
return 0;
}
