//Write application which accept file name from user and read all data from that file and display contents on screen
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
void DisplayWholeFile(char Fname[])
{
int fd=0;
char buffer[100]={'\0'};
int ret=0;
fd=open(Fname,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
return;
}
printf("Data from file is:\n");
while((ret=read(fd,buffer,100))!=0)
{
write(1,buffer,ret);
}
close(fd);
}

int main()
{
char name[50]={'\0'};
printf("Enter file name:");
scanf("%s",name);

DisplayWholeFile(name);
return 0;
}
