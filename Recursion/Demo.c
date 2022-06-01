//stack overflow
//storage class
#include<stdio.h>

void DisplayS()//sequence approach
{
printf("Asim\n");
printf("Asim\n");
printf("Asim\n");
printf("Asim\n");
}
void DisplayI()//iterative approach
{
for(int i=1;i<=4;i++)
{
printf("Asim\n");
}
}
void DisplayR()//recursive approach
{
static int i=1;//local variable//storage class was auto we changed it to static
if(i<=4)
{
printf("Asim\n");
i++;
DisplayR();//recursive call
}
}

int main()
{
DisplayR();
return 0;
}
