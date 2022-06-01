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

//Write a function which accept information of students from user and write that information into the file

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

//Write a program which read all the information of students from the file.
void FileRead(char *name)
{
int fd=0,ret=0,i=1;
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
printf("Student '%d'\n",i);
printf("Roll Number :%d\n",obj.Rollno);
printf("Name : %s\n",obj.Name);
printf("Marks :%d\n",obj.Marks);
i++;
}
close(fd);
}

//Write a program which accept file name which contains information of student and isplay only names of students.
void DisplayNames(char *name)
{
int fd=0,ret=0,i=1;
fd=open(name,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
return;
}
struct student obj;
printf("Candidate Names:\n");
while((ret=read(fd,&obj,sizeof(obj)))!=0)
{

printf("%d.Name : %s\n",i,obj.Name);

i++;
}
close(fd);
}

//Write a program which accept file name which contains information of student and display only marks of students.
void DisplayMarks(char *name)
{
int fd=0,ret=0,i=1;
fd=open(name,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
return;
}
struct student obj;
printf("Candidate Names:\n");
while((ret=read(fd,&obj,sizeof(obj)))!=0)
{

printf("%d.Name : %s \nMark Obtained: %d\n\n",i,obj.Name,obj.Marks);

i++;
}
close(fd);
}

//write a program which accept file name which contains information of student and display addition of marks of all sudents.
void Addition(char *name)
{
int fd=0,ret=0,sum=0;
fd=open(name,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file\n");
return;
}
struct student obj;
while((ret=read(fd,&obj,sizeof(obj)))!=0)
{
sum+=obj.Marks;
}
printf("Total Addition of Marks of all students: %d\n",sum);
close(fd);
}

int main()
{
char name[20];

printf("Enter file name:");
scanf("%s",name);
Addition(name);
return 0;
}
