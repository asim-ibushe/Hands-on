//Accept number from user & display that number of elements from the fibonacci series
//Input: 10

import java.io.*;
import java.util.*;
class Numbers
{

void fibSeries(int iNo)
{
if(iNo<0)
{
iNo=-iNo;
}
int first=0,second=1,third=0;
System.out.println();
System.out.print("Output: ");
for(int i=1;i<=iNo;i++)
{
third=first+second;
System.out.print(first+"\t");
first=second;
second=third;
}
}

}

class Fibo
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number");
		int ivalue = sobj.nextInt();

		Numbers nobj = new Numbers();
		nobj.fibSeries(ivalue);
	}
}
