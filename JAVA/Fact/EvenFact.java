//WAP which calculate the even factorial of number.
//input: 7
//output: 2*4*6

import java.lang.*;
import java.util.*;

class Numbers
{

int EvenFactorial(int iNo)
{
int Fact=1;
int iCnt=2;
if(iNo<0)//if number is negative
{
iNo=-iNo;
}
while(iCnt<=iNo)
{
Fact=Fact*iCnt;
iCnt=iCnt+2;
}
return Fact;
}

}

class EvenFact
{
public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
System.out.println("Enter any number:");
int value=sobj.nextInt();

Numbers nobj=new Numbers();

int ret=nobj.EvenFactorial(value);
System.out.println("Even Factorail is:"+ret);
}
}
