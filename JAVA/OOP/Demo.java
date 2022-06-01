import API.MYarray;
import java.lang.*;
import java.util.*;

class Searching extends MYarray
{
public Searching(int size)
{
super(size);
}

public boolean linearSearch(int no)
{
boolean flag=false;
for(int i=0;i<arr.length;i++)
{
	if(arr[i]==no)
	{
	flag=true;
	break;
	}
}
return flag;
}

public boolean linearSearchBI(int no)
{
int start=0,end=0;
boolean flag=false;
for(start=0,end=arr.length-1;start<=end;start++,end--)
{
if((arr[start]==no) || (arr[end]==no))
{
flag=true;
break;
}
}
return flag;
}

public boolean checkSorted()
{
boolean flag=true;
for(int i=0;i<arr.length-1;i++)
{
	if(arr[i]>arr[i+1])
	{
		flag=false;
		break;
	}
}
return flag;
}

public boolean binarySearch(int no)
{
int start=0,end=arr.length-1,middle=0;
boolean flag=false,bret=false;
bret=checkSorted();
if(bret==false)
{
System.out.println("Array is not sorted,Invalid input!!");
return false;
}

while(start<=end)
{
middle=(start+end)/2;
if((arr[middle]==no) || (arr[start]==no) ||(arr[end]==no))
{
flag=true;
break;
}
if(no>arr[middle])
{
	start=middle+1;
}
if(no<arr[middle])
{
	end=middle-1;
}
}
return flag;
}

}

class Demo
{
public static void main(String args[])
{
Scanner sobj=new Scanner(System.in);
System.out.println("Enter size :");

int size=sobj.nextInt();

Searching obj=new Searching(size);

obj.Accept();
obj.Display();

System.out.println("Enter searching Number:");
int value=sobj.nextInt();

boolean bret=obj.binarySearch(value);
if(bret==true)
{
System.out.println("Element is present,Found!!!");
}
else
{
System.out.println("Not Found!!!, Element not present");
}

}
}
