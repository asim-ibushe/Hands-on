//Write application which accept file name from user and one string from user. Writethat string at the end of file.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void myAppend(char *name,char *word)
{
int fd=0;
int count=0;
fd=open(name,O_WRONLY | O_APPEND);
if(fd==-1)
{
printf("Unable to open file, Error!!");
return;
}
count=sizeof(word);
printf("word size=%d",count);
write(fd,word,count);
close(fd);
}

int main()
{
char Fname[15]={'\0'};
char word[15]={'\0'};

printf("Enter file name=");
scanf("%s",Fname);

printf("Enter any string to append at the end");
scanf("%[^\n]s",word);

myAppend(Fname,word);
return 0;
}
