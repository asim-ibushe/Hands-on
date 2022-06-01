#include"Header.h"
//WAP which accept a number and display its digits in reverse order
void reverse_display(int ino)
{
int iDigit;
if(ino<0)
ino=-ino;

while(ino!=0)
{
iDigit=ino%10;
printf("%d",iDigit);
ino=ino/10;
}
}
//WAP which accept a nu from user and check whether zero is present in it

//1278
//1078	1523
//plz,avoid including return statement inside any loop.As all instruction of your code are stored on cache memory ,cpu follows pipeline architecture your program may terminate abnormally.Insted use break.
BOOL chk_zero(int ino)
{
int rem=0;
while(ino!=0)
{
rem=ino%10;
if(rem==0)
break;

ino=ino/10;
}
if(rem==0)
return True;

return False;
}

//WAP which accept no from user and count frequency of 2
int countN_frequency(int ino,int c_no)
{
int rem=0,count=0;
while(ino!=0)
{
rem=ino%10;
if(rem==c_no || rem==-c_no)
count++;

ino/=10;
}
return count;
}

//WAP conut frequency of digits less than 6
int count(int ino)//5895	6666	-515
{
if(ino<0)
ino=-ino;

int rem=0,count=0;
while(ino!=0)
{
rem=ino%10;
if(rem<6)
count++;

ino/=10;
}
return count;
}
