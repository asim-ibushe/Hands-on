#include<iostream>
using namespace std;
int main()
{
int iDemo=0;

int a=2;
int b=a+1;//3

if((a=3)==b)//3=3
{
cout<<a;//3
}
else
{
cout<<a+1;
}

char ch='\0';
cout<<"Enter any character\n";
cin>>ch;
if(ch>='a' && ch<'z')
{
cout<<"char is small case\n";
}
else if(ch>='A' && ch<'Z')
{
cout<<"char is capital in nature\n";
}
else
{
cout<<"char is a numeric\n";
}

int iRupees=70;
while(iRupees)
{
iRupees-=10;
cout<<"Kha Banana\n";
}
return 0;
}
