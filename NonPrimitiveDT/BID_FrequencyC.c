//Accept N numbers from user as well as accept one number and return the frequency of that number.
/*
In this logic we have to perform the bidirectional traversal to decrease the time complexity.
->	[12     45    -56      55       45       85      45      96]
index    0       1	2      3	 4	  5	  6	  7	
*/
#include"Header.h"
int main()
{
int size=0,num=0,*ptr=NULL;
printf("Decreasing the time complexity of Count frequencyNumber by N/2 \n");
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
printf("Total count found:\t %d\n",Frequency_BID(ptr,size,num));
free(ptr);
return 0;
}
