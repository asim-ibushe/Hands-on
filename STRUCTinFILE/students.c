#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

struct student
{
int Rollno;
char Name[20];
int Marks;
};

void FileWrite(char *name)
{
int fd=0,size=0;
fd=open(name,O_WRONLY);
if(fd==-1)
{
printf("Unable to open file\n");
return;
}
struct student obj;
printf("Enter number of Students:");
scanf("%d",&size);

for(int i=1;i<=size;i++)
{
//rewrite data for each student in same structure
printf("Enter %d Student Details:-\n",i);
printf("Enter roll number=");
scanf("%d",&obj.Rollno);
printf("Enter Name of Student=");
scanf("%s",&obj.Name);
printf("Enter Marks=");
scanf("%d",&obj.Marks);

write(fd,&obj,sizeof(obj));
}
close(fd);
}

void FileRead(char *name)
{
int fd=0,i=1,ret=0;
fd=open(name,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
return;
}
struct student obj;
printf("Data from file is:\n");
while((ret=read(fd,&obj,sizeof(obj)))!=0)
{
printf("Student %d Details:-\n",i);
printf("Roll Number :%d\n",obj.Rollno);
printf("Name : %s\n",obj.Name);
printf("Marks :%d\n",obj.Marks);
i++;
}
}

int main()
{
char name[20];
int no=0;
printf("Enter file name:");
scanf("%s",name);
printf("Enter choice read(1) or write(0):");
scanf("%d",&no);
if(no==0)
{
FileWrite(name);
}
else
{
FileRead(name);
}
return 0;
}
//wap which accept file name which contains info display only names
//only marks
//addition of marks
//only information of a particular student
//display name starting with p
//display marks greater than 90

