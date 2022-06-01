#include"Header.h"
//name: DisplayFactors
//Input: integer
//output: Display all factor of input number
//Description: It is used to display factors of no
//Author: Asim Ibushe
//Date: April 1,2021

void DisplayFactors(int no)
{
printf("Inside DisplayFactors shop \n");
printf("Factors of %d :",no);
for(int i=1;i<=no/2;i++)
{
if(no%i==0)
{
printf("\t %d",i);
}
}
printf("\n");
}
