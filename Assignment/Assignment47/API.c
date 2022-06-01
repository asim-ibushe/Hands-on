#include<stdio.h>
//Write a recursive program which accept string from user and count white spaces
int WhiteSpace(char *str)
{
static int count=0;
if(*str!='\0')
{
if(*str==' ')
{
count++;
}
str++;
WhiteSpace(str);
}
return count;
}
//Write a recursive program which accept number from user and return largest digit
int Max(int iNo)
{
if(iNo<0)
{
iNo=-iNo;
}
static int iMax=0;
int rem=0;
if(iNo!=0)
{
rem=iNo%10;
if(rem>iMax)
{
iMax=rem;
}
iNo=iNo/10;
Max(iNo);
}
return iMax;
}

//Write a recursive program which accept string from user and count number of small characters.
int Small(char *str)
{
if(str==NULL)
{
return -1;
}
static int icnt=0;
if(*str!='\0')
{
if(*str>='a' && *str<='z')
{
icnt++;
}
str++;
Small(str);
}
return icnt;
}

//Write a recursive program which accept number from user and return smallest digit
int Min(int iNo)
{
if(iNo<0)
{
iNo=-iNo;
}
static int iMin=9;
int rem=0;
if(iNo!=0)
{
rem=iNo%10;
if(rem<iMin)
{
iMin=rem;
}
iNo=iNo/10;
Min(iNo);
}
return iMin;
}

//Write a recursive program which accept number from user and return its reverse number.
int Reverse(int iNo)
{
if(iNo<0)
{
iNo=-iNo;
}
static int rev=0;
int rem=0;
if(iNo!=0)
{
rem=iNo%10;
rev=(rev*10)+rem;
iNo=iNo/10;
Reverse(iNo);
}
return rev;
}

int main()
{
//char text[20]="ASIM";
printf("Output:%d",Reverse(523));
return 0;
}
