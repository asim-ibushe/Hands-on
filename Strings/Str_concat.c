/*
    Problem statement :
 Accept 2 strings from user and concate the contens of first string at the end second string.
 
 */
#include"Header.h"
int main()
{
char str1[30]={'\0'};
char str2[30]={'\0'};
printf("Enter first string:\n");
scanf("%[^\n]s",str1);
printf("Enter second string:\n");
scanf(" %[^\n]s",str2);
strconcatX(str1,str2);//self defined string concat function.
printf("String After concatination:%s\n",str1);
return 0;
}
