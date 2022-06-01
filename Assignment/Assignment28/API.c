#include"Header.h"
//Write a program which accept string from user and convert it into lower case.
void strLwrX(char *str)
{
if(str==NULL)
{
printf("Memory Not Allocated!,Error\n");
return;
}
while(*str!='\0')
{
if(*str>='A' && *str<='Z')
{
*str=*str+32;
}
str++;
}
}
//Write a program which accept string from user and convert it into upper case.
void strUpperX(char *str)
{
if(str==NULL)
{
printf("Memory Not Allocated!,Error\n");
return;
}
while(*str!='\0')
{
if(*str>='a' && *str<='z')
{
*str=*str-32;
}
str++;
}
}
//write a program which accept string from user and toggle the case.
void ToggleAlphaCase(char *str)
{
if(str==NULL)
{
printf("Memory Not Allocated!,Error\n");
return;
}
while(*str!='\0')
{
if(*str>='A' && *str<='Z')
{
*str=*str+32;
}
else if(*str>='a' && *str<='z')
{
*str=*str-32;
}
str++;
}
}
//Write a program which accept string from user and display only digits from that string.
void StrDisplayDigi(char *str)
{
if(str==NULL)
{
printf("Memory Not Allocated!,Error\n");
return;
}
printf("Output:");
while(*str!='\0')
{
if(*str>='0' && *str<='9')
{
printf("%c",*str);
}
str++;
}
printf("\n");
}
//Write a program which accept string from user and count number of white spaces
int CntSpaces(char *str)
{
if(str==NULL)
{
return ErrMemory;
}
int count=0;
while(*str!='\0')
{
if(*str==' ')
{
count++;
}
str++;
}
return count;
}
