#include"Header.h"

// Func Name: divide	input: int,int output:float Description: Divide two no	Author:Asim Ibushe	Date: 19-March21 
float divide(int no1,int no2)
{
if(no2<=0)
{
return -1;
}
else
{
return no1/no2;
}
}

void marvellousPrint()
{
int iCnt=0;
for(iCnt=1;iCnt<=5;iCnt++)
{
printf("Marvellous\n");
}
}

void display()
{
for(int i=5;i>=1;i--)
{
printf("%d \n",i);
}
}

//Author: Asim date:22 March21 description: checks is no divby 5
BOOL checkDiv(int iNo)
{
int value=0;
value=iNo;
if(value%5==0)
{
return True;
}
else
{
return False;
}
}

void display_star(int iValue)
{
printf("Inside function\n");
int no=0;
no=iValue;
for(int i=0;i<no;i++)
{
printf(" * \t");
}
printf("\n");
}
