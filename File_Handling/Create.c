//Application to create new file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
char Fname[20]={'\0'};
int fd=0;	//file descriptor

printf("Enter File Name\n");
scanf("%s",Fname);

fd=creat(Fname,0777);//file gets opened with read & write mode

if(fd==-1)
{
printf("Unable to create file\n");
}
else
{
printf("File succesfully created with fd value:%d\n",fd);
}

close(fd);
return 0;
}
