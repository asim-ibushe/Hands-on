#include"Header.h"
int main()
{
char ch='\0';
BOOL bRet=False;
printf("Enter any Character:\n");
scanf("%c",&ch);
//printf("Entered char is %c",ch);
bRet=CheckCapital(ch);
if(bRet==True)
{
printf("Character is Capital\n");
}
else
{
printf("Character is Not Capital\n");
}
return 0;
}
