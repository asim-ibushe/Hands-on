#include<stdio.h>
/*
Write a program which accept string from user and copy that
characters of that string into another string in reverse order.
*/
void StrCpyRev(char *src,char *dest)
{
if((src==NULL)||(dest==NULL))
{
printf("Error!\n");
return;
}
int cnt=0;
while(*src!='\0')
{
cnt++;
src++;
}
src--;
for(int i=1;i<=cnt;i++)
{
*dest=*src;
dest++;
src--;
}
*dest='\0';
}

/*
Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.
*/
void StrCpyX(char *src,char *dest)
{
if((src==NULL)||(dest==NULL))
{
printf("Error!\n");
return;
}
while(*src!='\0')
{
if(*src==' ')
{
src++;
}
else
{
*dest=*src;
dest++;
src++;
}
}
*dest='\0';
}

/*
Write a program which accept string from user and copy that
characters of that string into another string by converting all small
characters into capital case.
*/
void StrCpyCap(char *src,char *dest)
{
if((src==NULL)||(dest==NULL))
{
printf("Error!\n");
return;
}
while(*src!='\0')
{
if((*src>='a')&&(*src<='z'))
{
*dest=*src-32;
}
else
{
*dest=*src;
}
src++;
dest++;
}
*dest='\0';
}

/*
Write a program which accept string from user and copy that
characters of that string into another string by converting all capital
characters into small case.
*/
void StrCpySmall(char *src,char *dest)
{
if((src==NULL)||(dest==NULL))
{
printf("Error!\n");
return;
}
while(*src!='\0')
{
if((*src>='A')&&(*src<='Z'))
{
*dest=*src+32;
}
else
{
*dest=*src;
}
src++;
dest++;
}
*dest='\0';
}

/*
Write a program which accept string from user and copy that
characters of that string into another string by toggling the case.
*/
void StrCpyToggle(char *src,char *dest)
{
if((src==NULL)||(dest==NULL))
{
printf("Error!\n");
return;
}
while(*src!='\0')
{
if(*src>='A' && *src<='Z')
{
*dest=*src+32;
}
else if(*src>='a' && *src<='z')
{
*dest=*src-32;
}
else
{
*dest=*src;
}
src++;
dest++;
}
*dest='\0';
}

int main()
{
char arr[20]="Asim Ibushe 4";
char brr[20]={'\0'};
StrCpyToggle(arr,brr);
printf("%s",brr);
return 0;
}
