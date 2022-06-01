#include"Header.h"
// Accept N numbers from user and return the largest number.
int largestFromSeq(int *arr,int size)
{
if(arr==NULL)
{
return ErrMemory;
}
if(size<=0)
{
return ErrSize;
}
int largest=arr[0];
for(int i=1;i<size;i++)
{
if(arr[i]>largest)
{
largest=arr[i];
}
}
return largest;
}

// Accept N numbers from user and return the smallest number.
int smallestFromSeq(int *arr,int size)
{
if(arr==NULL)
{
return ErrMemory;
}
if(size<=0)
{
return ErrSize;
}
int smallest=arr[0],i=0;
for(i=1;i<size;i++)
{
if(arr[i]<smallest)
{
smallest=arr[i];
}
}
return smallest;
}

// Accept N numbers from user and return the difference between largest and smallest number.
int diffLargestSmallest(int *arr,int size)
{
if(arr==NULL)
{
return ErrMemory;
}
if(size<=0)
{
return ErrSize;
}
return largestFromSeq(arr,size)-smallestFromSeq(arr,size);//drawback of invoking above two predefined function is 
//its time complexity O(2N) but code is reusable..
}
// Accept N numbers from user and display all such numbers which contains 3 digits in it.
void displayNum_3Digi(int *arr,int size)
{
if(arr==NULL)
{
printf("Memory Error.\n");
return;
}
if(size<=0)
{
printf("Invalid Array Size.\n");
return;
}
printf("Output:\n");
int i=0,counter=0,num=0,Flag=0;
for(i=0;i<size;i++)
{
counter=0;
num=arr[i];
while(num!=0)
{
num=num/10;
counter++;
}
if(counter==3)
{
Flag=1;
printf("%d is Three Digit\n",arr[i]);
}
}
if(Flag==0)
{
printf("No Element with Three Digit Found..\n");
}
}
// Accept N numbers from user and display summation of digits of each number.
void displayElement_Digisum(int *arr,int size)
{
if(arr==NULL)
{
printf("Memory Error.\n");
return;
}
if(size<=0)
{
printf("Invalid Array Size.\n");
return;
}
printf("Output:\n");
int i=0,iSum=0,rem=0,num=0;
for(i=0;i<size;i++)
{
iSum=0;
rem=0;
num=arr[i];
while(num!=0)
{
rem=num%10;
iSum+=rem;
num=num/10;
}
printf("Sum of Digits(%d) =%d\n",arr[i],iSum);
}
}
