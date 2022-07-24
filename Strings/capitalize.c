#include"Header.h"
int main()
{
char name[20]={'\0'};
printf("Enter your name:");
scanf("%[^\n]s",name);

title(name);
printf("My name is : %s\n",name);
return 0;
}
