#include<iostream>
using namespace std;

class SumFactors
{
int isum;
public:
int num;
SumFactors(int no)
{
num=no;
isum=1;
//cout<<"Inside factors\n";
}

int addition()
{
for(int i=2;i<=num/2;i++)
{
	if(num%i==0)
	{
	isum+=i;
	}
}
return isum;
}

bool chkPerfect()
{
if(this->addition()==num)
{
return true;
}
else
{
return false;
}
}
/*~SumFactors()
{
cout<<"End of factors\n";
}*/

};


int main()
{
//cout<<"Inside main";
int choice=1,symbol=0;
while(choice)
{
cout<<"Enter any Number=";
cin>>symbol;
SumFactors obj(symbol);
if(obj.chkPerfect()==1)
{
cout<<"Perfect no\n";
}
else
{
cout<<"not a perfect no\n";
}
cout<<"Enter your choice(0 or 1)=";
cin>>choice;
}


//cout<<obj.isum;
return 0;
}

