#include<stdio.h>
/*
.Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)
*/
void StrCpyX(char *src,char *dest)
{
if(src==NULL || dest==NULL)
{
printf("Memory not allocated,Error!\n");
return;
}
while(*src!='\0')
{
*dest=*src;
src++;
dest++;
}
*dest='\0';
}

/*
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
*/
void StrNCpyX(char *src,char *dest,int icnt)
{
if(src==NULL || dest==NULL)
{
printf("Memory not allocated,Error!\n");
return;
}
if(icnt<0)//invalid requirement
{
return;
}
while((*src!='\0')&&(icnt!=0))
{
*dest=*src;
src++;
dest++;
icnt--;
}
*dest='\0';
}

/*
Write a program which accept string from user and copy capital
characters of that string into another string.
*/
void StrCpyCap(char *src,char *dest)
{
if(src==NULL || dest==NULL)
{
printf("Memory not allocated,Error!\n");
return;
}
while(*src!='\0')
{
if((*src>='A')&&(*src<='Z'))
{
*dest=*src;
dest++;
}
src++;
}
*dest='\0';
}

/*
Write a program which accept string from user and copy small
characters of that string into another string.
*/
void StrCpySmall(char *src,char *dest)
{
if(src==NULL || dest==NULL)
{
printf("Memory not allocated,Error!\n");
return;
}
while(*src!='\0')
{
if((*src>='a')&&(*src<='z'))
{
*dest=*src;
dest++;
}
src++;
}
*dest='\0';
}

/*
Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).
*/
void StrCatX(char *src,char *dest)
{
if(src==NULL || dest==NULL)
{
printf("Memory not allocated,Error!\n");
return;
}
while(*src!='\0')//Traverse first str till end
{
src++;
}

while(*dest!='\0')//copy dest at end of src
{
*src=*dest;
src++;
dest++;
}
*dest='\0';
}

int main()
{
char arr[30]="Aimtech";
char brr[30]=" Enterprises";//empty string

StrCatX(arr,brr);
printf("%s\n",arr);

return 0;
}
