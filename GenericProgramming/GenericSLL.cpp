#include<iostream>
using namespace std;

template <class T>
struct node
{
T data;
struct node *next;
};
	
template <class T>
class SinglyLinkedList
{
public:
struct node<T> *Head;
int cnt;
SinglyLinkedList()
{
Head=NULL;
cnt=0;
}

void InsertFirst(T no)
{
struct node<T> *newn=new node<T>;
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

void InsertLast(T no)
{
struct node<T> *newn=new node<T>;
newn->data=no;
newn->next=NULL;
if(Head==NULL)
{
Head=newn;
}
else
{
struct node<T> *temp=Head;
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
struct node<T> *temp=Head;
cout<<"Output :";
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
SinglyLinkedList <char>obj;
obj.InsertFirst('D');
obj.InsertFirst('C');
obj.InsertFirst('B');
obj.InsertLast('A');
obj.Display();
return 0;
}
