#include<iostream>
using namespace std;
int binarySearch(int *arr,int size,int key)
{
int left=0,right=size-1,ans=-1;
int mid=(left+right)/2;
while(left<=right)
{
if(arr[mid]==key)
{
ans=mid;
break;
}
//go to right part
if(key>arr[mid])
{
left=mid+1;
}
if(key<arr[mid])
{
right=mid-1;
}
mid=(left+right)/2;
}
return ans;
}


int binarySearchX(int *arr,int start,int end,int key)
{
int left=start,right=end,ans=-1;
int mid=(left+right)/2;
while(left<=right)
{
if(arr[mid]==key)
{
ans=mid;
break;
}
//go to right part
if(key>arr[mid])
{
left=mid+1;
}
if(key<arr[mid])
{
right=mid-1;
}
mid=(left+right)/2;
}
return ans;
}
int firstOccurance(int *arr,int size,int key)
{
int left=0,right=size-1,ans=-1;
int mid=left+(right-left)/2;
while(left<=right)
{
if(arr[mid]==key)
{
ans=mid;
right=mid-1;
}
else if(key>arr[mid])
{
left=mid+1;
}
else if(key<arr[mid])
{
right=mid-1;
}

mid=left+(right-left)/2;
}
return ans;
}

int lastOccurance(int *arr,int size,int key)
{
int left=0,right=size-1,ans=-1;
int mid=left+(right-left)/2;
while(left<=right)
{
if(arr[mid]==key)
{
ans=mid;
left=mid+1;
}
else if(key>arr[mid])
{
left=mid+1;
}
else if(key<arr[mid])
{
right=mid-1;
}

mid=left+(right-left)/2;
}
return ans;
}

int totalOccurance(int *arr,int size,int key)
{
return (lastOccurance(arr,size,key)-firstOccurance(arr,size,key))+1;
}

int peakIndexMountain(int *arr,int size)
{
int s=0,e=size-1;
int mid=s+(e-s)/2;

while(s<e)
{
	if(arr[mid]<arr[mid+1])
	{
	s=mid+1;
	}
	else
	{
	e=mid;
	}
	mid=s+(e-s)/2;
}
return s;
}

int getPivot(int arr[],int n)
{
int s=0,e=n-1;
int mid=s+(e-s)/2;

while(s<e)
{
if(arr[mid] >= arr[0])
{
s=mid+1;
}
else
{
e=mid;
}
mid=s+(e-s)/2;
}
return e;
}

int findSortedRotated(int *arr,int n,int k)
{
int pivot=getPivot(arr,n);
if(k>=arr[pivot] && k<=arr[n-1])
{
//BS on second line
return binarySearchX(arr,pivot,n-1,k);
}
else
{
//BS on first line
return binarySearchX(arr,0,pivot-1,k);
}
}

int findSquareRoot(int no)
{
int s=0,e=no;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e)
{
int square=mid*mid;
if(square==no)
{
ans=mid;
break;
}
if(square<no)
{
ans=mid;
s=mid+1;
}
else
{
e=mid-1;
}
mid=s+(e-s)/2;
}
return ans;
}
int main()
{
int arr[11]={7,8,9,10,11,1,2,3,4,5,6};
int result=0;
cout<<"Output="<<findSquareRoot(37)<<endl;
return 0;
}
