#include"iostream"
using namespace std;

void sumpairs(int *arr,int count,int sum)
{
for(int i=0;i<count;i++)
{
for(int j=i+1;j<count;j++)
{
if(arr[i]+arr[j]==sum)
{
cout<<min(arr[i],arr[j])<<"\t";
cout<<max(arr[i],arr[j]);
cout<<endl;
}
}
}
cout<<endl;
}


void sumTriplet(int *arr,int count,int sum)
{
for(int i=0;i<count;i++)
{
	for(int j=i+1;j<count;j++)
	{
		for(int k=j+1;k<count;k++)
		{
			if((arr[i]+arr[j]+arr[k])==sum)
			{
			cout<<arr[i]<<"\t"<<arr[j]<<"\t"<<arr[k];				
			}
			cout<<endl;
		}
	}
}
cout<<endl;
}
int main()
{
int *ptr=NULL,count=0;
cout<<"Enter no of students=";
cin>>count;
ptr=(int *)malloc(sizeof(int)*count);
for(int i=0;i<count;i++)
{
cin>>ptr[i];
}
cout<<"[";
for(int i=0;i<count;i++)
{
cout<<ptr[i]<<",";
}
cout<<"]"<<endl;
sumTriplet(ptr,count,5);
return 0;
}
