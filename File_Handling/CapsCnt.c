//Accept file name from user & return number of capital characters.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int FileCapitalCount(char *Fname)
{
int fd=0,count=0,ret=0;
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
if((Buffer[i]>='A')&&(Buffer[i]<='Z'))
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
char name[20];
int ret=0;

printf("Enter file name:");
scanf("%s",name);

ret=FileCapitalCount(name);
printf("Total Capital count:%d\n",ret);
return 0;
}
