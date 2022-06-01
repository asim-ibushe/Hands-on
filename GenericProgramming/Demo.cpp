#include<iostream>
using namespace std;
template <typename T>//template header
/*
int Maximum(int a,int b,int c)
{
if((a>=b) && (a>=c))
{
return a;
}
else if((b>=a) && (b>=c))
{
return b;
}
else
{
return c;
}
}
*/
T Maximum(T a,T b,T c)
{
if((a>=b) && (a>=c))
{
return a;
}
else if((b>=a) && (b>=c))
{
return b;
}
else
{
return c;
}
}

int main()
{
cout<<Maximum<int>(3,7,8.1)<<endl;
cout<<Maximum<float>(3.3,5.6,9.7)<<endl;
cout<<(char)Maximum<int>('a','A','Z')<<endl;
return 0;
}
