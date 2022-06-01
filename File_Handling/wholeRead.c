//Application which accepts file name from user and display whole file on screen

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>//file control
#include<string.h>

//function used to open and read whole data
void DisplayWholeFile(char Fname[])
{
int fd=0;
char arr[100]={'\0'};
int ret=0;
fd=open(Fname,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
return;
}
printf("Data from the file is:\n");

while((ret=read(fd,arr,100))!=0)
{
write(1,arr,ret);
//Its a replacement of printf function
//1 means STDOUT and it means console or monitor
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
