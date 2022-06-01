import API.MYarray;
import java.util.*;
import java.lang.*;

class Main
{
public static void main(String args[])
{
Scanner sobj=new Scanner(System.in);
System.out.println("Enter the number of elements:");
int size=sobj.nextInt();

MYarray obj=new MYarray(size);
obj.Accept();
obj.Display();
}
}
