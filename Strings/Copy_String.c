
/*
Problem Statement:
 Accept string from user and copy the conetent into another string.
Hello
*/
#include"Header.h"
int main()
{
char str[30]={'\0'};//source address where copy is performed
char brr[30]={'\0'};//blank destination address where string need to be pasted
printf("Enter any String:\n");
scanf("%[^\n]s",str);
strcpyX(str,brr);
printf("String copied from address location str to brr: Output=%s\n",brr);//brr is out parameter
return 0;
}
