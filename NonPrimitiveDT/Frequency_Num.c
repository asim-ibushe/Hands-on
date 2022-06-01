/*
    Accept N numbers from user and one number, return the frequency of that number.
 */

/*
Input :
N : 8
Array :         12     45    -56      55       45       85      45      96
Number :      45
Output :        3
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      55
 Output :        1
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      58
 Output :        0
 
 */
#include"Header.h"
int main()
{
int count=0,*ptr;
printf("Enter count of elements in array:");
scanf("%d",&count);
ptr=(void *) malloc(sizeof(int)*count);
if(ptr==NULL)
{
printf("Memory is full,Error!!!\n");
return -1;
}
if(count==0)
{
printf("Invalid input, Error!!!\n");
return -1;
}
printf("Insert the numbers in array:\n");
for(int i=0;i<count;i++)
{
scanf("%d",&ptr[i]);
}
int iNo=0;
printf("Enter the Number to (count the frequency) of that Num in array:\n");
scanf("%d",&iNo);
printf("Number found %d time...\n",Count_Frequency(ptr,count,iNo));
free(ptr);
return 0;
}
