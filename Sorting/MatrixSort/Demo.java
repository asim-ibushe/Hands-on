import java.lang.*;
import java.util.*;
//Accept matrix and sort each row of matrix.
class Matrix
{
public void RowSort(int arr[][])
{
int min_i=0,temp=0;
for(int i=0;i<arr.length;i++)
{
for(int pass=0;pass<arr[i].length;pass++)
{
min_i=pass;
for(int j=pass+1;j<arr[i].length;j++) 
{
if(arr[i][min_i]>arr[i][j])
{
min_i=j;
}
}
//swap
if(arr[i][pass]!=arr[i][min_i])
{
temp=arr[i][pass];
arr[i][pass]=arr[i][min_i];
arr[i][min_i]=temp;
}
}
}
}

public void ColSort(int Arr[][])
{

}

}

class Demo
{
public static void main(String args[])throws Exception
{
Scanner sobj=new Scanner(System.in);
System.out.println("Enter number of rows");
int row=sobj.nextInt();
System.out.println("Enter the number of column");
int col=sobj.nextInt();

int arr[][]=new int[row][col];

System.out.println("Enter the values");
for(int i=0;i<arr.length;i++)
{
for(int j=0;j<arr[i].length;j++)
{
arr[i][j]=sobj.nextInt();
}
}

System.out.println("Entered data is:");
for(int i=0;i<arr.length;i++)
{
for(int j=0;j<arr[i].length;j++)
{
System.out.print(arr[i][j]+"\t");
}
System.out.println();
}

Matrix m=new Matrix();
m.RowSort(arr);

System.out.println("Sorted 2d array is:");
for(int i=0;i<arr.length;i++)
{
for(int j=0;j<arr[i].length;j++)
{
System.out.print(arr[i][j]+"\t");
}
System.out.println();
}
}
}
