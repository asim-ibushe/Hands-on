package API;
import java.lang.*;
import java.util.*;

public class MYarray
{
public int arr[];

public MYarray(int size)// para constructor
{
arr=new int[size];//Dynamic memory allocation
}

public void Accept()
{
Scanner sobj=new Scanner(System.in);
System.out.println("Enter the elements:");
for(int i=0;i<arr.length;i++)
{
arr[i]=sobj.nextInt();
}
}

public void Display()
{
System.out.println("Output:");
for(int i=0;i<arr.length;i++)
{
System.out.print(arr[i]+"\t");
}
System.out.println();
}
}

