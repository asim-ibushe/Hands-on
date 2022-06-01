/*
    Problem statement :
Accept string from user and return number of digits from the string.
  
Input : "abcd xy"
Output : 0
 
Input : India21
Output : 2
 
Input : Marvellous 75Pune98
Output : 4
 */
#include"Header.h"
int main()
{
char mail[30]={'\0'};
int iRet=0;
printf("Enter your mail id:\n");
scanf("%[^\n]s",mail);
iRet=str_digitCnt(mail);
if(iRet==ErrMemory)
{
printf("Error!!\n");
}
else
{
printf("No of Digits in your mail id:%d\n",iRet);
}
return 0;
}
