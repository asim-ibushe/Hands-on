//Write application which accept file name from user and create that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
char Fname[20]={'\0'};
int fd=0;

printf("Enter File Name\n");
scanf("%s",Fname);

fd=creat(Fname,0777);
if(fd==-1)
{
printf("Unable to create file\n");
}
else
{
printf("File successfully created with fd:%d\n",fd);
}

close(fd);
return 0;
}
