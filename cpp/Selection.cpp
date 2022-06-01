#include<iostream>
using namespace std;

void sort(int *arr,int n)
{
int pass=0,j=0,i_min=0,temp=0;
for(pass=0;pass<n-1;pass++)
{
i_min=pass;
	for(j=pass+1;j<n;j++)
	{
	if(arr[j]<arr[i_min])
	{
	i_min=j;
	}
	}
	if(arr[pass]!=arr[i_min])
	{
	temp=arr[pass];
	arr[pass]=arr[i_min];
	arr[i_min]=temp;
	}
}
}
int main()
{
int arr[]={7,1,4,3,9};
sort(arr,5);
for(int i=0;i<5;i++)
{
cout<<arr[i]<<"\t";
}
return 0;
}
