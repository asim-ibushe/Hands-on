//Accept string and one character from user & return the index where last occurance of that char.
/*
arr [H,e,l,l,o,a,l,p]
index0 1 2 3 4 5 6 7
ch=l
=frequency of l char is 3
=first occurance of l is 2
=last occurance of l is 6
 
 Input : "Hello"
            l
 Output : 3

 Input : "Hello World"
              l
 Output : 9
 
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
printf("Enter any character to search char last indexFound:\n");
scanf(" %c",&ch);
iRet=searchLastOccurance(arr,ch);
if(iRet==-1)
{
printf("character NOT Found...\n");
}
else if(iRet==ErrMemory)
{
printf("Memory Not Allocated\n");
}
else if(iRet==ErrInput)
{
printf("Invalid Input Provided\n");
}
else
{
printf("Last Occurance index found of %c character is:%d\n",ch,iRet+1);
}
return 0;
}

