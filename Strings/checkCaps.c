/*
    Problem statement : Accept String from user and return the number of capital characters from that string.
    
 Input : "Hello"
 Output : 1

 Input : "Hello World"
 Output : 2
 
 Input : "A"
 Output : 1
 
 Input : "India_ _IS_ _MY country"
 Output : 5

 Input : "abcdefg"
 Output : 0

 */
#include"Header.h"
int main()
{
char arr[30];
int iRet=0;
printf("Enter any String:\n");
scanf("%[^'\n']s",arr);
iRet=StrCapsX(arr);//base address
if(iRet==-1)
{
printf("Memory Error!!");
}
else
{
printf("Total number of capital characters in String are:%d \n",iRet);
}
return 0;
}

