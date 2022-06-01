//accept n numbers from user and return the frequency of even numbers.
/*
Test cases--
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 1

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   1
 Output : 0

 Input :
 Value of N : 9
 Numbers are :  5   -4   7   8   0    5     0   -8    1
 Output : 5 
*/


#include<stdio.h>
#include<stdlib.h>
#define ERRMEMORY -1
#define ERRSIZE -2
int countEven(int *arr,int size)//arr contains base address of array and size of array as parameter
{
int iEven=0;
if(arr==NULL)
{
return ERRMEMORY;
}
if(size<=0)
{
return ERRSIZE;//If array size is invalid
}

for(int i=0;i<size;i++)//loop to travel array
{
if(arr[i]%2==0)//check whether element is Even
iEven+=1;
}
return iEven;
}

int main()
{
int *ptr=NULL;//use of pointer
int count=0,iRet=0;
printf("Enter count of numbers:");
scanf("%d",&count);
//Dynamic memory allocation using malloc function
ptr=(int *) malloc(sizeof(int)*count);//default return value is void *(This is Explicit type casting)//BRK systemCall
	if(ptr==NULL)
	{
	printf("Error(Memory Full):unable to allocate memory\n");
	return -1;//return eronious termination of application notify to OS 
	}
	if(count==0){
	printf("Invalid input\n");
	return -1;
	}
printf("Enter the Numbers in array:\n");
	for(int i=0;i<count;i++)
	{
		scanf("%d",&ptr[i]);//Accept values from user and store in array
	}

iRet=countEven(ptr,count);//passing base address and total element in array as a parameter

	if(iRet==ERRMEMORY)
	{
	printf("Invalid Memory address passed..!!!");
	}
	else if(iRet==ERRSIZE)
	{
	printf("Invlaid array size passed..!!!");
	}
	else
	{
	printf("\nNo of Even numbers found are:\t%d",iRet);
	}
printf("\n");

free(ptr);//Deallocate the memory ocuupied allocated by malloc routine
return 0;//application success notify to OS
}
