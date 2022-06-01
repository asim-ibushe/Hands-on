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

//Function Name: ChkPerfect
//Input: Any integer number
//Output: return True or False
//Description: checks entered number perfect number or not
//Author: Asim Arif Ibushe
//Date: 8-April,2021
Bool ChkPerfect(int iNo)
{
if(iNo<0)//handle negative value
iNo=-iNo;

if(iNo==1 || iNo==0)// filter value of no 0 or 1
return False;

if(Sum_Factor(iNo)==iNo)
{
return True;
}
else
{
return False;
}
}

//Function Name: ChkPerfect_original
//Input: Any integer number
//Output: return True or False
//Description: checks entered number perfect number or not
//Author: Asim Arif Ibushe
//Date: 8-April,2021

//forward traversal optimization by applying break condition
//independant perfect check function
Bool ChkPerfect_original(int no)
{
if(no<0)//handle negative value
no=-no;

if(no==1 || no==0)// filter value of no 0 or 1
return False;

int iSum=1;
for(int i=2;i<=no/2;i++)
{
	if(no%i==0)
	{
	iSum+=i;
	}
	if(iSum>no)
	break;
}

if(iSum==no)
{
return True;
}
else
{
return False;
}
}

//backward traversal to optimize code from O(N/2) to less than half the time.
//Bool ChkPerfect_original(int no)
{
if(no<0)//handle negative value
no=-no;

if(no==1 || no==0)// filter value of no 0 or 1
return False;

int iSum=1;
for(int i=no/2;i>=2;i--)
{
	if(no%i==0)
	{
	iSum+=i;
	}
	if(iSum>no)
	break;
}

if(iSum==no)
{
return True;
}
else
{
return False;
}
}
