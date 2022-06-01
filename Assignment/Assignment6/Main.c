#include"Header.h"
int main()
{
int Number,ch;
while(ch!=5)
{
printf("--App =Manipulation on an Integer Number--\n");
printf("Enter your choice\n1:reverse_display\n 2:chk_zero\n 3:countN_frequency\n 4:count\n 5:exit\n");
scanf("%d",&ch);
if(ch==5)
continue;
printf("Enter any Number\n");
scanf("%d",&Number);

switch(ch)
{
case 1:reverse_display(Number);break;
case 2:
	if(chk_zero(Number)==True)
	{
	printf("zero found\n");
	}
	else
	{
	printf("zero not found\n");
	}	
	break;
case 3:
	printf("Count of 2 in Number is %d\n",countN_frequency(Number,2));
	printf("Count of 4 in Number is %d\n",countN_frequency(Number,4));
	break;
case 4:
	printf("Count of Digits less than 6 are: %d\n",count(Number));break;
}
}
printf("End of your application\n\n");
return 0;
}
