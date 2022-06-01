#include"Header.h"
int main()
{
char ch='\0';
int choice=0;
BOOL bRet=False;
printf("Enter any character:\n");
scanf(" %c",&ch);

do
{
printf("----Application[character Manipulation]----\nChoose Your Operation..\n1.Display ASCII Table\n2.Display Alphabet Toggle\n3.Range of Alphabet\n4.ChkSpecial character or Not\n5.Display ascii,octal & Hex of input char\n6.If you need to Update input character itself\n7.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
printf("**********\n");
switch(choice)
{
case 1:
	printf("ASCII Table\n");
	DisplayAsciiTable();
	break;
case 2:
	DisplayViceVersa(ch);
	break;
case 3:
	DisplayRange(ch);
	break;
case 4:
	bRet=ChkSpecial(ch);
	if(bRet==True)
	{
	printf("It's Special Character\n");	
	}
	else
	{
	printf("Not Special Character\n");
	}
	break;
case 5:
	D_DecOctHex(ch);
	break;
case 6:
	printf("Current Character is %c\n",ch);
	printf("Insert updated character:");
	scanf(" %c",&ch);
	break;
}
printf("**********\n");
}
while(choice<=6);
return 0;
}
