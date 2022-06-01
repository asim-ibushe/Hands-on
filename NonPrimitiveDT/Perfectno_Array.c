/*
Accept N numbers from user and display all perfect numbers from that N numbers
Input: N=5
values: 10	6 	12	28	8
Output: 6	28
*/
#include"Header.h"
int main()
{
int iValue=0,*ptr=NULL;
printf("Enter Total numbers of Elements:");
scanf("%d",&iValue);
if(iValue==0)
{
return -1;
}
ptr=(int *)malloc(sizeof(int)*iValue);
if(ptr==NULL)
{
return -1;
}
printf("Enter the Numbers:\n");
for(int i=0;i<iValue;i++)
{
scanf("%d",&ptr[i]);
}
Display_perfect(ptr,iValue);
free(ptr);
return 0;
}

