/*
    Problem statement : Accept string and one input character from user, return the frequency of that character.
 
 Input : "Hello"
                l
 Output : 2

 Input : "Hello World"
            o
 Output : 2
 
 Input : "AE Demo"
                e
 Output : 1

 Input : "AE Demo"
               H
 Output : 0

 */
#include"Header.h"
//#include<stdlib.h>
int main()
{
char arr[30],ch='\0';
int iRet=0;
printf("Enter any String:\n");
scanf("%[^'\n']s",arr);
//fflush(stdin);//import Header lib according to OS
printf("Enter any char to count its Frequency ThroughOut:");
scanf(" %c",&ch);// Add space to flush the contents of input buffer
iRet=CalCharFreqX(arr,ch);//base address of character array & input character.
if(iRet==-1)
{
printf("Memory Error!!");
}
else
{
printf("Total number Character Count Found:%d \n",iRet);
}
return 0;
}
