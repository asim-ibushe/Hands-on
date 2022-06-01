//Accept number from user and check whether that number is armstrong number or not
//Input: 153
//output: true

import java.io.*;
import java.util.*;

class Numbers
{
int Count(int iNo)
{
int cnt=0;
while(iNo!=0)
{
iNo=iNo/10;
cnt+=1;
}
return cnt;
}

boolean armstrong(int num)
{
if(num<0)
{
num=-num;
}
int power=Count(num);
int sum=0,temp=num,rem=0;
int Mult=1;
while(num!=0)
{
rem=num%10;
Mult=1;
for(int i=1;i<=power;i++)
{
Mult=Mult*rem;
}
sum=sum+Mult;
num=num/10;

if(sum>temp)
{
break;
}
}
if(sum==temp)
{
return true;
}
else
{
return false;
}
}
}

class Armstrong
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter any number:");
int num=sc.nextInt();
Numbers obj=new Numbers();
boolean bRet=false;
bRet=obj.armstrong(num);
if(bRet==true)
{
System.out.println("Yupp,Number is Armstrong");
}
else
{
System.out.println("Number is Not!!! Armstrong");
}
}
}
