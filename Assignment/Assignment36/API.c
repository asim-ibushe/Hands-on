#include<stdio.h>
/*
void StrNCatX(char *src,char *dest,int iCnt)
{
if(src==NULL || dest==NULL)
{
return; 
}
while(*src!='\0')
{
src++;
}

while((*dest!='\0') && (iCnt!=0))
{
*src=*dest;
iCnt--;
}
*src='\0';
}
*/
int StrCmpX(char *src,char *dest)
{
while((*src!='\0') && (*dest!='\0'))
{
if(*src==*dest)
{
src++;
dest++;
}
else
{
break;
}
}
if((*src=='\0')&&(*dest=='\0'))
{
return 1;
}
else
{
return 0;
}
}

int StrNCmpX(char *src,char *dest,int iCnt)
{
int flag=0;
while(iCnt)
{
if(*src==*dest)
{
src++;
dest++;
}
else
{
flag=1;
}
iCnt--;
}
if(flag==0)
{
return 1;
}
else
{
return 0;
}
}

void StrRevTogX(char *str)
{
if(str==NULL)
{
return;
}
char temp;
char *first,*last;
first=str;
last=str;
while(*last!='\0')
{
if(*last>='A' && *last<='Z')
{
*last+=32;
}
else if(*last>='a' && *last<='z')
{
*last-=32;
}
last++;
}
last--;

while(first<last)
{
temp=*first;
*first=*last;
*last=temp;

first++;
last--;
}
}

int StrPalindrome(char *str)
{
if(str==NULL)
{
return -1;
}
int flag=1;
char *first,*last;
first=str;
last=str;
while(*last!='\0')
{
if(*last>='a' && *last<='z')
{
*last-=32;
}
last++;
}
last--;
while(first<last)
{
if(*first==*last)
{
first++;
last--;
}
else
{
flag=0;
break;
}
}
if(flag==0)
{
return 0;
}
else
{
return 1;
}
}

int main()
{
char name[10]="1abccBA1";
if(1==StrPalindrome(name))
{
printf("Palindrome\n");
}
else if(0==StrPalindrome(name))
{
printf("Not\n");
}
else
{
printf("Invalid Input\n");
}

return 0;
}
