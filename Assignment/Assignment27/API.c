#include"Header.h"
//Write a program which accept string from user and count number of capital characters
int CntCapsAlpha(char *str)
{
int iCnt=0;
if(str==NULL)
{
return ErrMemory;
}
while(*str!='\0')
{
if(*str>='A' && *str<='Z')
{
iCnt++;
}
str++;
}
return iCnt;
}
//Write a program which accept string from user and count number of small characters
int CntSmallAlpha(char *str)
{
if(str==NULL)
{
return ErrMemory;
}
int counter=0;
while(*str!='\0')
{
if(*str>='a' && *str<='z')
{
counter++;
}
str++;
}
return counter;
}
/*
Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
*/
int DiffSmallCapsAlpha(char *str)
{
if(str==NULL)
{
return ErrMemory;
}
return CntSmallAlpha(str)-CntCapsAlpha(str); 
}
//Write a program which accept string from user and check whether it contains vowels in it or not.
BOOL ChkVowels(char *str)
{
if(str==NULL)
{
return ErrMemory;
}
int Flag=0;
while(*str!='\0')
{
if(*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'||*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
{
Flag=1;
break;
}
}
if(Flag==1)
{
return True;
}
else
{
return False;
}
}
//Write a program which accept string from user and display it in reverse order
void DisplayRev(char *str)
{
if(str==NULL)
{
printf("Memory Error!\n");
return;
}
printf("Output:");
int count=0;
while(str[count]!='\0')
{
count++;
}
count--;
while(count>=0)
{
printf("%c",str[count]);
count--;
}
printf("\n");
}

