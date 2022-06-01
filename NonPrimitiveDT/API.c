#include"Header.h"
int FindMax(int *arr,int count)
{
int iMax=0;
if(arr==NULL)
{
printf("Memory not allocated!! Error\n");
return 0;
}
if(count==0)
{
printf("Invalid input count..\n");
return 0;
}
iMax=arr[0];//empty container to store max value
for(int i=1;i<count;i++)//iterate from second element of array till the end
{
if(arr[i]>iMax)//check whether next array element is greater than assumed max number
{
iMax=arr[i];
}
}
return iMax;//return maximum number
}
//########################################################################################
int FindMin(int *arr,int count)
{
int iMin=0;
if(arr==NULL)
{
printf("Memory not allocated!! Error\n");
return 0;
}
if(count<=0)
{
printf("Invalid input count..\n");
return 0;
}
iMin=arr[0];//empty container to store first element of array assumed as smallest
for(int i=1;i<count;i++)//iterate from second element of array till the end
{
if(arr[i]<iMin)//check whether next array element is less than assumed minimum number
{
iMin=arr[i];
}
}
return iMin;//return minimum number
}
//#########################################################################################
void Display_perfect(int *arr,int count)
{
//printf("Inside helper");
if(arr==NULL)
{
printf("Memory not assigned");
return;
}
if(count<=0)
{
printf("Invalid input");
return;
}
int iSum=0;
for(int i=0;i<count;i++)
{
for(int j=1;j<=(arr[i]/2);j++)
{
if(arr[i]%j==0)
{
//printf("%d",j);
iSum+=j;
}
}
if(iSum==arr[i])
printf("Perfect No:%d\n",arr[i]);//if you need to count total count of perfect no throughtout array, init counter & inc

iSum=0;
}
}
//####################################################################
void SumDigits(int arr[],int count)
{
printf("Addition of Digits of all array elements:\n");
int iNo=0,iSum=0,iDigi=0;
for(int num=0;num<count;num++)
{
iNo=arr[num];
iSum=0;
if(iNo<0)//updater
{
iNo=-iNo;
}
while(iNo!=0)
{
iDigi=iNo%10;
iSum=iSum+iDigi;
iNo=iNo/10;
}
printf("%d -> %d\n",arr[num],iSum);
}
}
//####################################################################
int Count_Frequency(int *arr,int count,int iNo)
{
if(arr==NULL)
return -1;

int Frequency=0;
for(int i=0;i<count;i++)
{
if(arr[i]==iNo)
{
Frequency++;
}
}
return Frequency;
}
//################################################################
int Frequency_BID(int arr[],int size,int iNo)
{
if (arr==NULL)
return -1;

int iStart=0,iEnd=0,Frequency=0;
for(iStart=0,iEnd=size-1;iStart<=iEnd;iStart++,iEnd--)
{
if((iStart==iEnd) && (arr[iStart]==iNo))// For middle element in case of odd no of elements in array
{
Frequency++;
break;
}
if(arr[iStart]==iNo)
{
Frequency++;
}
if(arr[iEnd]==iNo)
{
Frequency++;
}
}
return Frequency;
}

//######################################################

BOOL search_BID(int arr[],int size,int iNo)
{
if (arr==NULL || size==0)
{
return -1;
}
int iStart=0,iEnd=0;
for(iStart=0,iEnd=size-1;iStart<=iEnd;iStart++,iEnd--)
{
if(arr[iStart]==iNo)
{
break;
}
if(arr[iEnd]==iNo)
{
break;
}
}
if(arr[iStart]==iNo || arr[iEnd]==iNo)
{
return True;
}
else
{
return False;
}
}
//######################################################
int First_Occurance(int *arr,int size,int iNo)
{
if(arr==NULL || size==0)
return -2;

int i=0;
for(i=0;i<size;i++)
{
if(arr[i]==iNo)
{
break;
}
}
if(i==size)
{
return -1;
}
else
{
return i+1;
}
}
