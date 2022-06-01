//Accept string from user and calculate length of that string.(Implement our own strlen() function)
//  index[0,1,2,3,4,5,6,7,8,9,10,11] of size 10
//(BA)arr[A,s,i,m, ,I,b,u,s,h,e,\0]
#include"Header.h"
int main()
{
char arr[30];
int iRet=0;
printf("Enter the string\n");
scanf("%[^'\n']s",arr);//Accept the array input till user enter breakline(Enter Key on std input device)
printf("Entered string is %s. \n",arr);
iRet=StrlenX(arr);//passing base address of array arr
printf("Length of string:%d\n",iRet);
return 0;
}
