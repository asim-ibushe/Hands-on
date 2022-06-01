//class for array
#include<iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

class Array
{
public:
int *arr;
int size;

Array(int length=10)//parametrised constructor with default value
{
cout<<"Inside constructor\n";
arr=new int[length];//Dynamic memory allocation
size=length;
cout<<"Memory allocated!,initialization completed\n";
}
~Array()//destructor
{
cout<<"Inside destructor\n";
delete []arr;
cout<<"Memory deallocated!!\n";
}
void Accept()
{
cout<<"Enter elements\n";
for(int i=0;i<size;i++)
{
cin>>arr[i];
}
}

void Display()
{
cout<<"Elements from array are:\n";
for(int i=0;i<size;i++)
{
cout<<arr[i]<<"\t";
}
cout<<"\n";
}

};

class Searching : public Array//inheritance
{
public:

Searching(int no=10) : Array(no)
{}

BOOL linearSearch(int no)
{
int i=0;
for(i=0;i<size;i++)
{
if(arr[i]==no)
{
break;
}
}

if(arr[i]==no)
{
return TRUE;
}
else
{
return FALSE;
}
}

};
int main()
{
int no=0;
cout<<"Enter number of elements:\n";
cin>>no;
int value=0;
Searching *obj=new Searching(no);
obj->Accept();
obj->Display();
cout<<"Enter the element to search:\n";
cin>>value;
if(obj->linearSearch(value)==TRUE)
{
cout<<"Element is present,Found!!\n";
}
else
{
cout<<"Element not Found!!\n";
}
return 0;
}
