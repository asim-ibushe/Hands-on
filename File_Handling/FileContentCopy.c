//Accept two file names from user and copy the contents of one file into another file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void FileCopy(char *src,char *dest)
{
int fdsrc=0,fddest=0;
char Mug[100]={'\0'};
int ret=0,i=1;

fdsrc=open(src,O_RDONLY);
if(fdsrc==-1)
{
printf("Unable to open source file,Error!!\n");
return;
}

fddest=open(dest,O_RDWR | O_CREAT, 0777);
if(fddest==-1)
{
printf("Unalbe to open destination file\n");
close(fdsrc);
return;
}

while((ret=read(fdsrc,Mug,sizeof(Mug)))!=0)
{
printf("Iteration: %d Buffer Byte Cnt: %d\n",i,ret);
i++;
write(fddest,Mug,ret);
}

close(fdsrc);
close(fddest);
}

int main()
{
char Fname1[15]={'\0'};
char Fname2[15]={'\0'};

printf("Enter source file name =");
scanf("%s",Fname1);

printf("Enter destination file =");
scanf("%s",Fname2);

FileCopy(Fname1,Fname2);
return 0;
}
