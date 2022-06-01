//Write application which accept file name from user and open that file in read mode.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
char Fname[20]={'\0'};
char Buffer[20]={'\0'};
int fd=0,ret=0;//file descriptor

printf("Enter file name:");
scanf("%s",Fname);

fd=open(Fname,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
}
else
{
printf("File Opened successfully with fd:%d\n",fd);
}


ret=read(fd,Buffer,sizeof(Buffer));
if(ret==-1)
{
printf("Unable to catch content from file,Error!\n");
}
else
{
printf("DATA successfully read:%d\n",ret);
}
printf("File Descriptotr: %d\n",fd);
printf("Extracted data: %s\n",Buffer);
close(fd);
}
