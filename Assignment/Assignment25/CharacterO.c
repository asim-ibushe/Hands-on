#include"Header.h"
int main()
{
char ch='\0';
int choice=0;
BOOL cRet=False;
printf("Enter any character:\n");
scanf("%c",&ch);

do
{
    printf("\nChoose Diagnostic Question:\n\n1.Check Entered char is Alphabet or Not\n2.Capital Alphabet\n3.Digit or Not\n4.Small Case Alphabet or Not\n5.Display Exam Time:\n6.Exit\n=");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
		cRet=CheckAlpha(ch);
		if(cRet==True)
		{
		printf("IT IS ALPHABET!\n");
		}
		else
		{
		printf("NOT ALPHABET\n");
		}
                break;
        case 2:
		cRet=ChkCapital(ch);
		if(cRet==True)
		{
		printf("ALPHABET IS CAPITAL!\n");
		}
		else
		{
		printf("NOT A CAPITAL ALPHABET\n");
		}
		break;
        case 3:
		cRet=ChkDigit_Not(ch);
		if(cRet==True)
		{
		printf("IT IS DIGIT!\n");
		}
		else
		{
		printf("NOT A DIGIT\n");
		}
                break;

        case 4:
		cRet=ChkSmallC(ch);
		if(cRet==True)
		{
		printf("ALPHABET IS SMALL IN CASE!\n");
		}
		else
		{
		printf("NOT A SMALL CASE\n");
		}
                break;

        case 5:
		printf("Enter class division(A B C or D)\n");
		DisplaySchedule(ch);
                break;
    }
}
while(choice!=6);
return 0;
}
