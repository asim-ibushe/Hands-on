#include<iostream>
using namespace std;

struct node
{
int data;
struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLinkedList
{
public:
PNODE Head;
int cnt;
SinglyLinkedList()
{
Head=NULL;
cnt=0;
}

void InsertFirst(int no)
{
PNODE newn=new NODE;
newn->data=no;
newn->next=NULL;
if(Head==NULL)
{
Head=newn;
}
else
{
newn->next=Head;
Head=newn;
}
cnt++;
}

void InsertLast(int no)
{
PNODE newn=new NODE;
newn->data=no;
newn->next=NULL;
if(Head==NULL)
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
}
cnt++;
}

void Display()
{
PNODE temp=Head;
while(temp!=NULL)
{
cout<<temp->data<<"\t";
temp=temp->next;
}
cout<<"\nCount="<<cnt<<"\n";
}

};

int main()
{
SinglyLinkedList *obj;
obj=new SinglyLinkedList();
obj->InsertFirst(10);
obj->InsertFirst(20);
obj->InsertFirst(30);
obj->InsertLast(40);
obj->Display();
return 0;
}
