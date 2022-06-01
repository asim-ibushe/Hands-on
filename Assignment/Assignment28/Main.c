#include"Header.h"
int main()
{
char name[30]={'\0'};
printf("Enter Your Address:");
scanf("%[^\n]s",name);
int iRet=0,choice=0;

do
{
printf("----Application[String]----\nChoose Your Operation..\n1.convert it into lower case\n2.convert it into upper case.\n3.toggle the case.\n4.display only digits from that string.\n5.count number of white spaces\n6.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
printf("**********\n");
switch(choice)
{
case 1:
	strLwrX(name);
	printf("String After Lower case:%s\n",name);
	break;
case 2:
	strUpperX(name);
	printf("String After Upper case:%s\n",name);
	break;
case 3:
	ToggleAlphaCase(name);
	printf("String After Toggling case:%s\n",name);
	break;
case 4:
	StrDisplayDigi(name);
	break;
case 5:
	iRet=CntSpaces(name);
	if(iRet==ErrMemory)
	{
	printf("Memory Error!\n");
	}
	else
	{
	printf("Total no of whitespaces :%d\n",iRet);	
	}
	break;
}
printf("**********\n");
}
while(choice<=5);
return 0;
}
