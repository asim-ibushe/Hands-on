//Accept file name,position and size from user and read that number of bytes of data from that position.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void FileRead(char *name,int position,int size)
{
int fd=0,ret=0;
char *Buffer=NULL;
Buffer=(char *)malloc(size);

fd=open(name,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
return;
}
//change the current offset
ret=lseek(fd,position,SEEK_SET);
//printf("Return value of lseek: %d\n",ret);

ret=read(fd,Buffer,size);
printf("Data from file is:\n");

//printf("Return value of read: %d\n",ret);
write(1,Buffer,ret);

printf("\n");
close(fd);
free(Buffer);
}

int main()
{
char Fname[15]={'\0'};
int value=0,size=0;

printf("Enter file name =");
scanf("%s",Fname);

printf("Enter the position:");
scanf("%d",&value);

printf("Enter number of bytes that you want to read:\n");
scanf("%d",&size);

FileRead(Fname,value,size);
return 0;
}
