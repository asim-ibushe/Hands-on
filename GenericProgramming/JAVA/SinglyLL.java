//singly linked list creation in java
package MyCollection;
import java.lang.*;
import java.util.*;

class Node <T>
{
public T data;
public Node next;

public Node(T value)
{
data=value;
next=null;
}
}

public class SinglyLL <T>
{
public Node Head;

public SinglyLL()
{
Head=null;
}

public void InsertFirst(T no)
{
Node newn=new Node(no);
if(Head==null)
{
Head=newn;
}
else
{
newn.next=Head;
Head=newn;
}
}

public void InsertLast(T no)
{
Node newn=new Node(no);
if(Head==null)
{
Head=newn;
}
else
{
Node temp=Head;
while(temp.next!=null)
{
temp=temp.next;
}
temp.next=newn;
}
}

public int Count()
{
int icnt=0;
Node temp=Head;
while(temp!=null)
{
temp=temp.next;
icnt++;
}
return icnt;
}

public void InsertAtPos(T no,int pos)
{
int size=Count();
if((pos<=0)||(pos>size+1))
{
return;
}
if(pos==1)
{
InsertFirst(no);
}
else if(pos==(size+1))
{
InsertLast(no);
}
else
{
Node newn=new Node(no);
Node temp=Head;
for(int i=2;i<=pos-1;i++)
{
temp=temp.next;
}
newn.next=temp.next;
temp.next=newn;
}
}
public void DeleteAtPos(int pos)
{
int size=Count();
if((pos<=0)||(pos>size))
{
return;
}
if(pos==1)
{
DeleteFirst();
}
else if(pos==(size))
{
DeleteLast();
}
else
{
Node temp=Head;
for(int i=2;i<=pos-1;i++)
{
temp=temp.next;
}
temp.next=temp.next.next;
}
}
public void Display()
{
Node temp=Head;
System.out.print("Output:");
while(temp!=null)
{
System.out.print(" "+temp.data);
temp=temp.next;
}
System.out.println();
}



public void DeleteFirst()
{
if(Head==null)
{
return;
}
else
{
Head=Head.next;
}
}

public void DeleteLast()
{
if(Head==null)
{
return;
}
else
{
	if(Head.next==null)
	{
	Head=null;
	}
	else
	{
	Node temp=Head;
	while(temp.next.next!=null)
	{
	temp=temp.next;
	}
	temp.next=null;
	}
}
}
}
