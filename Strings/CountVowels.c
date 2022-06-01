/*
    Problem statement : Accept String from user and return the number of VOWELS from that string.
    (AEIOU / aeiou)
 
 Input : "Hello"
 Output : 2

 Input : "Hello World"
 Output : 3
 
 Input : "AE Demo"
 Output : 4
 */
#include"Header.h"
int main()
{
char arr[30];
int iRet=0;
printf("Enter any String:\n");
scanf("%[^'\n']s",arr);
iRet=CountVowelsX(arr);//base address
if(iRet==-1)
{
printf("Memory Error!!");
}
else
{
printf("Total number of Vowels count in String are:%d \n",iRet);
}
return 0;
}
