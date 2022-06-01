import java.lang.*;
import java.util.*;

class Bubble
{
public void sort(int arr[])
{
		int pass = 0,no = 0, j = 0 , temp = 0;
		boolean flag=true;

		for(pass = 0; pass < arr.length && flag==true; pass++)
		{
			no = pass+1;
			flag=false;
			System.out.println("Inside Pass : "+ no);
			for(j = 0; j< arr.length-1-pass; j++)
			{
				if(arr[j] > arr[j+1])
				{
					flag=true;
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
			System.out.println("Array after pass : "+ no);
			for(int k = 0; k < arr.length; k++)
			{
				System.out.print(arr[k]+"\t");
			}
			System.out.println();
		}
}
}

class Demo
{
public static void main(String args[])throws Exception
{
Scanner sobj=new Scanner(System.in);
System.out.println("Enter the size of array:");
int size=sobj.nextInt();

int arr[]=new int[size];

System.out.println("Enter the values:");
for(int i=0;i<arr.length;i++)
{
arr[i]=sobj.nextInt();
}

Bubble bobj=new Bubble();
bobj.sort(arr);

System.out.println("Array after sorting:");
for(int i=0;i<arr.length;i++)
{
System.out.print(arr[i]+"\t");
}
System.out.println();
}
}
