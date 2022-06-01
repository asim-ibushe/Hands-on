//Accept no from user and display all numbers in reverse format
//Input: 4
//Output: 4 3 2 1

#include<stdio.h>
/*
os
main IR=-- BP=-- [1000]
DisplayI no=5 IR=29 BP=1000 [900]
*/
void DisplayI(int no)
{
while(no>0)
{
printf("%d\n",no);
no--;
}
}

void DisplayR(int no)
{
if(no>0)
{
printf("%d\t",no);
no--;
DisplayR(no);
}
}

int main()
{
DisplayI(5);
DisplayR(5);
printf("End of main\n");
return 0;
}
