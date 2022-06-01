//Accept file name from user & return number of capital characters.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int FileSize(char *Fname)
{
int fd=0,ret=0;

fd=open(Fname,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
return -1;
}

ret=lseek(fd,0,SEEK_END);
close(fd);
return ret-1;
}

int main()
{
char name[20];
int ret=0;

printf("Enter file name:");
scanf("%s",name);

ret=FileSize(name);
printf("Total size of file(Byte): %d\n",ret);
return 0;
}
