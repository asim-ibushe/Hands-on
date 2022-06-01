//Application to open existing file and read the data from that file.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
char Fname[20] ={'\0'};
char Buffer[50]={'\0'};
int fd=0;//file descriptor
int ret=0;

printf("Enter file name:");
scanf("%s",Fname);

fd=open(Fname,O_RDWR);
if(fd==-1)
{
printf("Unable to open file\n");
}
else
{
printf("File succesfully opened with fd:%d\n",fd);
}

ret=read(fd,Buffer,15);
if(ret==-1)
{
printf("Unable to catch content from file,Error!\n");
}
else
{
printf("Data succesfully read\n");
}
printf("Extracted data:%s\n",Buffer);
close(fd);
return 0;
}
