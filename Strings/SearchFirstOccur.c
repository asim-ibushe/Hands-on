/*
    Problem statement : Accept string from user and one charcter return the first occurance of that character
 
 Input : "Hello"
            l
 Output : 2

 Input : "Hello World"
            o
 Output : 4
 
 Input : "AE Demo"
                e
 Output : 4

 Input : "AE Demo"
               H
 Output : -1

 */
#include"Header.h"
int main()
{
char arr[30],ch='\0';
int iRet=0;
printf("Enter any string:\n");
scanf("%[^\n]s",arr);
printf("Enter any character to find its First Occured Index:\n");
scanf(" %c",&ch);//space to clear previous input buffer value left behind
iRet=searchFirstOccurance(arr,ch);
if(iRet==-1)
{
printf("Character Not Found\n");
}
else if(iRet==ErrInput)
{
printf("Invalid Input\n");
}
else
{
printf("First Occurance of char %c in i/p String is :%d \n",ch,iRet+1);
}
return 0;
}
