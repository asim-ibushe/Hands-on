import java.lang.*;
import java.util.*;

class Selection
{
public void sort(int arr[])
{
int pass=0,j=0,temp=0,min_i=0;

for(pass=0;pass<arr.length;pass++)
{
min_i=pass;

for(j=pass+1;j<arr.length;j++)
{
if(arr[min_i]<arr[j])
{
min_i=j;
}
}
if(arr[pass]!=arr[min_i])
{
temp=arr[pass];
arr[pass]=arr[min_i];
arr[min_i]=temp;
}
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

Selection obj=new Selection();
obj.sort(arr);

System.out.println("Array after sorting:");
for(int i=0;i<arr.length;i++)
{
System.out.print(arr[i]+"\t");
}
System.out.println();
}
}
