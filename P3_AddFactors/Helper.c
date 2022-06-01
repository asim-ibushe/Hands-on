#include"Header.h"

//Function Name: Sum_Factor
//Input: Any integer no
//Output: Intiger
//Description: Accept any no ,returns addition of all factors of input number
//Author: Asim Arif Ibushe
//Date: 7-April,2021

int Sum_Factor(int no)
{
int iSum=1;
if(no==0)//filter if input no is 0 return 0
{
return 0;
}

if(no<0)//input updater
{
no=-no;
}
for(int i=2;i<=no/2;i++)
{
	if(no%i==0)
	{
	iSum+=i;
	}
}
return iSum;
}
