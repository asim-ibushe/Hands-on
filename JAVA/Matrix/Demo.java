//Accept matrix from user & display addition of all elements from each row separately

import java.lang.*;
import java.util.*;

class Matrix
{
void SumRow(int arr[][])
{
int isum=0;
for(int i=0;i<arr.length;i++)
{
for(int j=0;j<arr[i].length;j++)
{
isum=isum+arr[i][j];
}
System.out.println("Summation of elements in row"+i+" is  "+isum);
isum=0;
}
}

// Accept matrix from user and display largst number from each row
void MaxRow(int arr[][])
{
int imax=arr[]
for(int i=0;i<arr.length;i++)
{
for(int j=0;j<arr[i].length;j++)
{
isum=isum+arr[i][j];
}
System.out.println("Summation of elements in row"+i+" is  "+isum);
isum=0;
}
}
}
class Demo
{
public static void main(String args[])
{
Scanner sobj=new Scanner(System.in);
System.out.println("Enter number of rows:");
int row=sobj.nextInt();
System.out.println("Enter number of columns:");
int col=sobj.nextInt();

int arr[][]=new int[row][col];
System.out.println("Enter the elements:");
for(int i=0;i<arr.length;i++)
{
System.out.println("Row with index:"+(i+1));
	for(int j=0;j<arr[i].length;j++)
	{
	System.out.println("Enter the element:"+i+","+j);
	arr[i][j]=sobj.nextInt();
	}
}
Matrix mobj=new Matrix();
mobj.SumRow(arr);
}
}
