#include<iostream>
using namespace std;

typedef struct node
{
int data;
struct node* next;
struct node* prev;
}NODE,*PNODE;

class DoublyLL
{
private:
	PNODE Head;
	int isize;
public:
//function declaration
DoublyLL();//constructor
void Display();
int Count();
void InsertFirst(int);
void InsertLast(int);
void InsertAtPos(int,int);
void DeleteFirst();
void DeleteLast();
void DeleteAtPos(int);
};//End of class Declaration

DoublyLL::DoublyLL()
{
Head=NULL;
isize=0;
}

inline void DoublyLL::Display()
{
PNODE temp=Head;
cout<<"\nOutput: NULL <=> ";
while(temp!=NULL)
{
cout<<temp->data<<" <=> ";
temp=temp->next;
}
cout<<"NULL"<<endl;
}

inline int DoublyLL::Count()//time complexity is O(0)
{
return isize;//no ll travelling is required
}

void DoublyLL::InsertFirst(int value)
{
PNODE newn=NULL;
newn=new NODE;
newn->data=value;
newn->next=NULL;
newn->prev=NULL;
if(Head==NULL)//LL is empty
{
Head=newn;
}
else
{
newn->next=Head;
Head->prev=newn;
Head=newn;
}
isize++;
}

void DoublyLL::InsertLast(int value)
{
PNODE newn=NULL;
newn=new NODE;
newn->data=value;
newn->next=NULL;
newn->prev=NULL;
if(Head==NULL)//LL is empty
{
Head=newn;
}
else
{
PNODE temp=Head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newn;
newn->prev=temp;
}
isize++;
}

void DoublyLL::InsertAtPos(int value,int pos)
{
if((pos<1) || (pos>isize+1))
{
return;
}

if(pos==1)
{
InsertFirst(value);
}
else if(pos==isize+1)
{
InsertLast(value);
}
else
{
//allocating dynamic mem
PNODE newn=new NODE;
newn->data=value;
newn->next=NULL;
newn->prev=NULL;

PNODE temp=Head;
for(int i=2;i<pos;i++)
{
temp=temp->next;
}
newn->next=temp->next;
temp->next->prev=newn;
temp->next=newn;
newn->prev=temp;
isize++;
}
}

int main()
{
DoublyLL obj; //object creation
for(int i=1;i<=10;i++)
{
obj.InsertLast(i);
obj.Display();
}
return 0;
}
