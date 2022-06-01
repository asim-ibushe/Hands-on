//accept no from user and return addition of its digits
//ip-7845
//output-24
#include<stdio.h>

int sumI(int no)
{
int isum=0;
while(no!=0)
{
isum+=(no%10);
no=no/10;
}
return isum;
}

int sumR(int no)
{
static int isum=0;
if(no!=0)
{
isum+=(no%10);
no=no/10;
sumR(no);
}
return isum;
}

int main()
{
printf("Total sum=%d\n",sumR(7845));
return 0;
}
