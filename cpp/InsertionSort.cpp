#include<iostream>
using namespace std;

void insertionSort(int *arr,int n)
{
int key=0;
for(int i=1;i<n;i++)
{
key=arr[i];
int j=i-1;
	for(;j>=0;j--)
	{
	if(arr[j]>key)
	{
	//perform shift
	arr[j+1]=arr[j];
	}
	else
	{
	break;
	}
	}
	arr[j+1]=key;
}
}

int main()
{
int arr[]={9,8,7,6,5,4,3,2,1};
insertionSort(arr,9);

for(int i=0;i<9;i++)
cout<<arr[i]<<"\t"; 

return 0;
}
