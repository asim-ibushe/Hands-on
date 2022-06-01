#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch='\0';
printf("Enter character:\n");
scanf("%c",&ch);
if(ch==46)//if user end . as input through standard input device
{
exit(-1);
}
else
{
printf("Hello\n");
}
return 0;
}
