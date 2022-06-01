//class for array in generic way
#include<iostream>
using namespace std;

typedef int Bool;
#define True 1
#define False 0
template <class T>

class Array
{
public:

T *arr;
int size;
Array(int length=10)
{
cout<<"Inside constructor\n";
arr=new T[length];
size=length;
}

~Array()
{
cout<<"Inside destructor\n";
delete []arr;
}

void Accept()
{
cout<<"Enter elements:\n";
for(int i=0;i<size;i++)
{
cin>>arr[i];
}
}

void Display()
{
cout<<"Elements from array are: \n";
for(int i=0;i<size;i++)
{
cout<<arr[i]<<"\t";
}
cout<<"\n";
}

Bool linearSearch(T no)
{
int i=0;
for(i=0;i<size;i++)
{
if(arr[i]==no)
{
break;
}
}
if(i==size)
{
return False;
}
else
{
return True;
}
}
};
int main()
{
int no=0;
cout<<"Enter the number of elements:\n";
cin>>no;

Array <float>*obj;
obj=new Array<float>(no);

obj->Accept();
obj->Display();
float value=0;
cout<<"Enter element to search:\n";
cin>>value;
Bool bret=False;
bret=obj->linearSearch(value);
if(bret==True)
{
cout<<"Element Found!\n";
}
else
{
cout<<"XXX--NOT Found--XXX\n";
}
return 0;
}
