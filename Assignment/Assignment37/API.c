#include<stdio.h>
//Write a program which accept string from user count number of words from string
int WordCount(char *str)
{
if(str==NULL)
{
return -1;
}
int iCnt=0,i=0;
while(str[i]!='\0')
{
if(str[i]==' ')//if it is space char
{
while((str[i]!='\0') && (str[i]==' '))
{
i++;//skip all white spaces
}
}
else if((str[i]!='\0') && (str[i]!=' '))//word found
{
iCnt++;
while((str[i]!=' ') && (str[i]!='\0'))//skip all non space character
{
i++;
}
}
}
return iCnt;
}

//Write a program which accept string from user and return length of largest word.
int LargestWord(char *str)
{
if(str==NULL)
{
return -1;
}
int i=0,imax=0,prev=0;
while(str[i]!='\0')
{
if(str[i]==' ')
{
while((str[i]!='\0')&&(str[i]==' '))//loop for white spaces
{
i++;//skip all space bars
}
}
if((str[i]!='\0') && (str[i]!=' '))
{
while((str[i]!='\0') && (str[i]!=' '))
{
imax++;
i++;
}
if(imax>prev)
{
prev=imax;
}
imax=0;
}
}
return prev;
}

//Write a program which accept string from user and reverse each word in place.
void Reverse(char *str,int start,int end)
{
char temp='\0';
while(start<end)
{
temp=str[start];
str[start]=str[end];
str[end]=temp;
start++;
end--;
}
}
void StrWrdRev(char *str)
{
if(str==NULL)
{
return;
}
int i=0,start=0,end=0;
while(str[i]!='\0')
{
//printf("I have started counting");
if(str[i]==' ')
{
while((str[i]!='\0') && (str[i]==' '))
{
i++;//skip all white spaces
}
}

if((str[i]!='\0') && str[i]!=' ')
{
start=i;
while((str[i]!=' ') && (str[i]!='\0'))
{
i++;
}
end=i-1;
//printf("Value of start and end is:%d,%d",start,end);
Reverse(str,start,end);
}
}
}

//Write a program which accept string from user and copy the contents into another string by removing extra white spaces.
void StrCpyX(const char *src,char *dest)
{
if(src==NULL || dest==NULL)
{
return;
}
int i=0,j=0;
while(src[i]!='\0')
{
if(src[i]==' ')//if it is space char
{
while((src[i]!='\0') && (src[i]==' '))
{
i++;//skip all white spaces
}
}
else if((src[i]!='\0') && (src[i]!=' '))//word found
{
while((src[i]!='\0') && (src[i]!=' '))
{
dest[j]=src[i];
j++;
i++;
}
dest[j]=' ';
j++;
}
}
}


//5. Write a program which accept string from user and replace each occurrence of first character of each word into capital case.
void StrCap(char *str)
{
if(str==NULL)
{
return;
}
int i=0,Flag=0;
while(str[i]!='\0')
{
if(str[i]==' ')
{
while((str[i]!='\0') && (str[i]==' '))
{
i++;//keep on increment i on white space
}
}

if((str[i]!='\0') && (str[i]!=' '))
{
while((str[i]!=' ') && (str[i]!='\0'))
{
if((str[i]>='A') && (str[i]<='Z'))
{
Flag=1;
i++;
}
else if((Flag==0) && (str[i]>='a') && (str[i]<='z'))
{
str[i]-=32;
Flag=1;
i++;
}
else
{
i++;
}
}
Flag=0;
}
}
}

int main()
{
char source[30]={'\0'};
char dest[30]={'\0'};
printf("Enter any string:");
scanf("%[^\n]s",source);
StrCpyX(source,dest);
printf("\nOutput:%s\n",dest);
return 0;
}
