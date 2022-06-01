//1. Write a program which accepts file name from user and count number of capital characters from that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountCapital(char Fname[])
{
int fd=0,ret=0,count=0;
char Buffer[100];
fd=open(Fname,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
return -1;
}

while((ret=read(fd,Buffer,sizeof(Buffer)))!=0)
{
for(int i=0;i<ret;i++)
{
if((Buffer[i]>='A') && (Buffer[i]<='Z'))
{
count++;
}
}
}
close(fd);
return count;
}

int CountSmall(char Fname[])
{
int fd=0,ret=0,count=0;
char Buffer[100];
fd=open(Fname,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
return -1;
}

while((ret=read(fd,Buffer,sizeof(Buffer)))!=0)
{
for(int i=0;i<ret;i++)
{
if((Buffer[i]>='a') && (Buffer[i]<='z'))
{
count++;
}
}
}
close(fd);
return count;
}

int CountWhite(char FName[])
{
int fd=0,count=0,ret=0;
char Buffer[100];
fd=open(FName,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file, Error!\n");
return -1;
}

while((ret=read(fd,Buffer,sizeof(Buffer)))!=0)
{
for(int i=0;i<ret;i++)
{
if(Buffer[i]==' ')
{
count++;
}
}
}
close(fd);
return count;
}

int CountChar(char FName[],char ch)
{
int fd=0,count=0,ret=0;
char Buffer[100];
fd=open(FName,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file, Error!\n");
return -1;
}

while((ret=read(fd,Buffer,sizeof(Buffer)))!=0)
{
for(int i=0;i<ret;i++)
{
if(Buffer[i]==ch)
{
count++;
}
}
}
close(fd);
return count;
}

int main()
{
char name[20],ch='\0';
int ret=0;

printf("Enter file name:");
scanf("%s",name);

//ret=CountCapital(name);
//printf("Total Capital Count:%d\n",ret);

//ret=CountSmall(name);
//printf("Total Small character Count:%d\n",ret);

//ret=CountWhite(name);
//printf("Total White Spaces Count:%d\n",ret);

printf("Enter any character:");
scanf(" %c",&ch);
ret=CountChar(name,ch);
printf("Total Alphabet Count Found:%d\n",ret);
return 0;
}
