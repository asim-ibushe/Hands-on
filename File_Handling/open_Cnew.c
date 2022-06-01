//Application to open the file, if not present create new

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
char Fname[20]={'\0'};
int fd=0;	//file descriptor
char arr[50]={'\0'};
int ret=0,length=0;
printf("Enter File Name\n");
scanf("%s",Fname);

fd=open(Fname,O_RDWR | O_CREAT, 0777);//file gets opened with read & write mode

if(fd==-1)
{
printf("Unable to create file\n");
}
else
{
printf("File succesfully created with fd value:%d\n",fd);
}

printf("Enter the data that you want to write in the file=\n");
scanf(" %[^'\n']s",arr);
length=strlen(arr);

ret=write(fd,arr,length);
if(ret==-1)
{
printf("unable to write in the file, Error!!!!\n");
}
else
{
printf("Data successfully written in the file:%d\n",ret);
}
close(fd);
return 0;
}
