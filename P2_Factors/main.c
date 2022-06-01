/*
Problem statement : accept number from user and display factors of that number.
input:12 output:1,2,3,4,6
*/

/*
start- 
step1=accept no from user store it in variable
step2=init a counter to 1 iterate it till number-1
step3=divide accepted no by counter value
step4=check that your remainder of division is equal to 0
step5=if above condition is true display value of counter(factor of accepted number)
end
*/

#include"Header.h"
int main() //entry point function
{
printf("--Star of Application-- \n");
int Number=0;
printf("Enter any Number :");
scanf("%d",&Number);
DisplayFactors(Number);
printf("--End Application-- \n");
return 0;
}
