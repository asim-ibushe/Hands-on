//Accept N numbers from user as well as accept one number and return number found or Not found.
/*
In this logic we have to perform the bidirectional traversal to decrease the time complexity.
->	[12     45    -56      55       45       85      45      96]
index    0       1	2      3	 4	  5	  6	  7	
*/
#include"Header.h"
int main()
{
int size=0,num=0,*ptr=NULL;
BOOL iRet=False;
printf("Decreasing the time complexity of search Number traversal by N/2 \n");
printf("Enter count of Numbers in array:\n");
scanf("%d",&size);
ptr=(int *) malloc(sizeof(int)*size);
printf("Enter array elements in array:\n");
for(int i=0;i<size;i++)
{
scanf("%d",&ptr[i]);
}
printf("Enter element to search:\n");
scanf("%d",&num);
iRet=search_BID(ptr,size,num);
if(iRet==True)
{
printf("Element Found,Yupppp\n");
}
else if(iRet==False)
{
printf("Number Not Found in array\n");
}
else
{
printf("Error!!,Something went wrong..\n");
}
free(ptr);
return 0;
}
