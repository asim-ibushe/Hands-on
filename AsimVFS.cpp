#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void DisplayHelp()
{
    printf("-----------------------------------------------------\n");
    printf("open : It is used to open the existing file\n");
    printf("close : It is used to close the opened file\n");
    printf("read : It is used to read the contents of file\n");
    printf("write : It is used to write the data into file\n");
    printf("lseek : It is used to change the offset of file\n");
    printf("stat : It is used to odisplay the information of file\n");
    printf("fstat : It is used to display the information of opened file\n");
    printf("creat : It is used to create new regular file\n");
    printf("rm : It is used to delete regular file\n");
    printf("ls : It is used to display all names of files\n");
    printf("-----------------------------------------------------\n");
}

int main()
{
//variable declarations
char str[80];
char command[4][80];//four words and each word of size 80 character
int count=0;

printf("Customized virtual file system\n");

while(1)
{
printf("Marvellous VFS :>");
fgets(str,80,stdin);//Accept the command
fflush(stdin);//flush standard input buffer

count=sscanf(str,"%s %s %s %s",command[0],command[1],command[2],command[3]);//break that command into tokens
printf("%d",count);

if(count==1)
{
if(strcmp(command[0],"help")==0)
{
	DisplayHelp();
}
}
else
{
	printf("Bad command or file name\n");
}

}
return 0;
}
