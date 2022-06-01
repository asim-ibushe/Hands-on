#include"Header.h"
#include"API.c"
int main()
{
int choice=1,no=0;
PNODE First=NULL;
while(choice)
{
printf("Enter Your Choice:\n1:Create or Add more element in LL\n2:Display Perfect NO\n3:Display Prime NO\n4:Addition Even\n5:Second MaxElement 6:Display sum of Digi Each Element\n7:Exit: Press 0\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("Enter any Number:");
	scanf("%d",&no);
	InsertLast(&First,no);
	break;
case 2:DisplayPerfect(First);
break;

case 3:DisplayPrime(First);
break;
case 4:printf("Addition of all Even elements:%d",AdditionEven(First));
break;
case 5:printf("Second largest:%d",sec_Max(First));
break;
case 6:Display_AOD(First);
break;
}
printf("Total elements in LL are:%d\n",Count(First));
}
return 0;
}
