/*
Accept number from user & check whether that number is strong number or not.
#strong no is such a number whose summation of factorial of digits is same as that number.

eg: 145: 1! + 4! + 5!=145 True
eg: 190: 1! + 9! + 0!	  False
*/

import java.lang.*;
import java.util.*;

class Digits
{

boolean checkStrong(int iNo)
{
if(iNo<0)
{
iNo=-iNo;
}
int temp=iNo;
int Digi=0,sum=0;
int Fact=1;
while(iNo!=0)
{
Digi=iNo%10;

while(Digi>=1)
{
Fact=Fact*Digi;
Digi--;
}
iNo=iNo/10;
sum=sum+Fact;
if(sum>temp)
{
break;
}
Fact=1;
}
if(temp==sum)
{
return true;
}
else
{
return false;
}
}

boolean checkStrongX(int iNo)
{
int Fact[]={1,1,2,6,24,120,720,5040,40320,362880};
int Digi=0,isum=0;
int temp=iNo;
while(iNo!=0)
{
Digi=iNo%10;
isum=isum+Fact[Digi];
if(isum>temp)
{
break;
}
iNo=iNo/10;
}
if(isum==temp)
{
return true;
}
else
{
return false;
}
}

}

class Client
{
public static void main(String arg[])
{
boolean bret=false;
Scanner sobj=new Scanner(System.in);
System.out.println("Enter any number:");
int value=sobj.nextInt();
Digits d=new Digits();
bret=d.checkStrongX(value);
if(bret==true)
{
System.out.println("Number is Strong");
}
else
{
System.out.println("Number is not Strong");
}
}
}
