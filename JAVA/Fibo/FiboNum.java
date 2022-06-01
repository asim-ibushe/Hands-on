//Accept number from user and display number of elements from the fibonacci
//series till that number

import java.io.*;
import java.util.*;

class Numbers
{
void fibSeries(int num)
{
int first=0,second=1;
int third=0;
System.out.println();
System.out.print("Output :");
while(first<=num)
{
System.out.print("\t"+first);
third=first+second;
first=second;
second=third;
}
System.out.println();
}
}

class FiboNum
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
