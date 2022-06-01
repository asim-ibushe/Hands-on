#include"Header.h"

//WAP which accept no from user,return count even no of digits
int count_even(int ino)
{
if(ino==0)
return 1;
int rem=0,count=0;
while(ino!=0)
{
rem=ino%10;
if(rem%2==0)
count++;

ino/=10;
}
return count;
}

//WAp which accept no from user,return count of odd digits
int count_odd(int ino)
{
int rem=0,count=0;
while(ino!=0)
{
rem=ino%10;
if(rem%2!=0)
count++;

ino/=10;
}
return count;
}

//WAP which accept no from user,return no between 3 and 7
int count_Range3to7(int ino)
{
if(ino<0)
ino=-ino;

int rem=0,count=0;
while(ino!=0)
{
rem=ino%10;
if(rem>3 && rem<7)
count++;

ino/=10;
}
return count;
}

//WAP which accept no from user,return multiplication
int digi_Mul(int ino)
{
if(ino==0)//filter to handle zero as a input
return 0;
if(ino<0)//updater
ino=-ino;

int mul=1,rem=0;
while(ino!=0)
{
rem=ino%10;
if(rem!=0)
{
mul=mul*rem;
}
ino=ino/10;
}
return mul;
}

//WAP which Return diff between Total summation Even minus odd 
//i/p 735= o/p-15
int diff_EvenOddSummation(int ino)
{
int ievenSum=0,ioddSum=0;
int rem=0;
if(ino<0)
ino=-ino;

while(ino!=0)
{
rem=ino%10;
if(rem%2==0)
{
ievenSum+=rem;
}
else
{
ioddSum+=rem;
}
ino=ino/10;
}
return ievenSum-ioddSum;
}

//accept three numbers and return the multiplication
int Multiplication(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;
    
    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }
    
    if(iNo1 == 0)
    {
        iNo1 =1;
    }
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }
    
    iMult = iNo1 * iNo2 * iNo3;
    
    return iMult;
}
