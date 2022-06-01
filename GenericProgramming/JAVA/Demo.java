import java.lang.*;
import java.util.*;
import MyCollection.SinglyLL;
class Demo
{
public static void main(String arg[])throws Exception
{

SinglyLL<Integer> obj=new SinglyLL<Integer>();
Scanner sobj=new Scanner(System.in);
int choice=1;
int value=0;
int pos=0;
for(int i=1;i<21;i++)
{
obj.InsertLast(i);
}

while(choice!=0)
{
			System.out.println("__________________________");
			System.out.println("Enter your choice");
			System.out.println("__________________________");
			System.out.println("1 : Insert First");
			System.out.println("2 : Insert Last");
			System.out.println("3 : Insert at position");
			System.out.println("4 : Delete First");
			System.out.println("5 : Delete Last");
			System.out.println("6 : Delete at position");
			System.out.println("7 : Display");
			System.out.println("8 : Count");
			System.out.println("0 : Exit");
			System.out.println("__________________________");
System.out.println("Enter your choice:");
choice=sobj.nextInt();
switch(choice)
{
case 1:System.out.println("Enter any integer:");
	value=sobj.nextInt();
	obj.InsertFirst(value);
	break;
case 2:System.out.println("Enter any integer:");
	value=sobj.nextInt();
	obj.InsertLast(value);
	break;
case 3:System.out.println("Enter any integer & position to insert:");
	value=sobj.nextInt();
	pos=sobj.nextInt();	
	obj.InsertAtPos(value,pos);
	break;
case 4:
	obj.DeleteFirst();
	break;
case 5:
	obj.DeleteLast();
	break;
case 6:
	System.out.println("Enter position to delete:");
	pos=sobj.nextInt();
	obj.DeleteAtPos(pos);
	break;

case 7:
	obj.Display();
	break;
case 8:
	System.out.println("Total Elements="+obj.Count());
	break;
}
}
}
}
