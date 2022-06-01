/*
 Problem statement :
 Accept N numbers from user and return the largest (Maximum) number.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 7

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   11
 Output : 11
 
 Input :
 Value of N : 9
 Numbers are :  5   -4   7   8   0    5     0   -8    1
 Output : 8
 
 Input :
 Value of N : 9
 Numbers are :  -5   -4   -7   -8    -5     -8    -1
 Output : -1
 
 Input :
 Value of N : 9
 Numbers are :  11  11  11  11    11      11  11  11  11
 Output : 11

 Input :
 Value of N : 5
 Numbers are :  0   0   0   0   0
 Output : 0
 */
#include"Header.h"

int main()
{
int count=0,*ptr=NULL;
printf("Enter count of total numbers in array :\n ");//Accepting total numbers in array
scanf("%d",&count);
ptr=(int *) malloc(sizeof(int)*count);//Runtime memory allocation
if(ptr==NULL)//validating that memory is allocated, else notify OS and terminate
{
printf("Error: Memory not allocated\n");
return -1;
}
if(count==0)
{
printf("Invalid input count!!!\n");
return -1;
}
printf("Enter numbers in array :\n");//Accepting all no from user and store it in array
for(int i=0;i<count;i++)
{
scanf("%d",&ptr[i]);
}
printf("Maximum number found is :%d\n",FindMax(ptr,count));
free(ptr);
return 0;
}
