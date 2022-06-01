//accept string from user and calculte its length
//Input: "Hello"
//output: 5
#include<stdio.h>
int Strlen(char *str)
{
int icnt=0;
while(*str!='\0')
{
icnt++;
str++;
}
return icnt;
}

int StrlenR(char str[])
{
static int icnt=0;
if(*str!='\0')
{
icnt++;
str++;
StrlenR(str);
}
return icnt;
}

int main()
{
int iRet=0;
char str[30]={'\0'};
printf("Enter any string:");
scanf("%[^'\n']s",str);
iRet=StrlenR(str);
printf("Total length=%d\n",iRet);
return 0;
}
