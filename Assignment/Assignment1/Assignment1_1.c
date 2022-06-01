#include"Header.h"
int main()
{
printf("** Division two Number App **\n");
int a,b;
float fRet;
printf("Enter first Number:\n");
scanf("%d",&a);
printf("Enter Second Number:\n");
scanf("%d",&b);
fRet=divide(a,b);
if (fRet==-1)
{
printf("Invalid Parameter\n");
}
else
{
printf("Division =%f \n",fRet);
}
return 0;
}
