#include"Header.h"
int main()
{
char name[30]={'\0'};
printf("Enter Your Enterprise Name:");
scanf("%[^\n]s",name);
int iRet=0,choice=0;
BOOL bRet=False;

do
{
printf("----Application[String]----\nChoose Your Operation..\n1.Count number of capital characters\n2.Count number of small characters\n3.Diff between frequency of small characters & capital\n4.check whether it contains vowels in it or not.\n5.display it in reverse order\n6.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
printf("**********\n");
switch(choice)
{
case 1:
	iRet=CntCapsAlpha(name);
	if(iRet==ErrMemory)
	{
	printf("Memory Not Assigned,Error!\n");
	}
	else
	{
	printf("Count:%d\n",iRet);
	}
	break;
case 2:
	iRet=CntSmallAlpha(name);
	if(iRet==ErrMemory)
	{
	printf("Memory Not Assigned,Error!\n");
	}
	else
	{
	printf("Count:%d\n",iRet);
	}
	break;
case 3:
	iRet=DiffSmallCapsAlpha(name);
	if(iRet==ErrMemory)
	{
	printf("Memory Not Assigned,Error!\n");
	}
	else
	{
	printf("Count:%d\n",iRet);
	}
	break;
case 4:
	bRet=ChkVowels(name);
	if(bRet==True)
	{
	printf("Vowels Found\n");	
	}
	else
	{
	printf("Vowels Not Found\n");
	}
	break;
case 5:
	DisplayRev(name);
	break;
}
printf("**********\n");
}
while(choice<=5);
return 0;
}
