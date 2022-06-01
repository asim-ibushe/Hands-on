//class for array
#include<iostream>
using namespace std;
class Array
{
public:
int *arr;
int size;

Array(int length=10)//parametrised constructor with default value
{
cout<<"Inside constructor\n";
arr=new int[length];
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

int main()
{
int no=0;
cout<<"Enter number of elements:\n";
cin>>no;

Array obj(no);//static object
obj.Accept();
obj.Display();

//dynamic object
Array *obj1=new Array();
obj1->Accept();
obj1->Display();

//delete obj1;
return 0;
}
