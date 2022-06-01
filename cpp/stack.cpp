#include<iostream>
#include"mysql_connection.h"
using namespace std;
struct node
{
int data;
struct node* next;
};
typedef struct node NODE;
typedef struct node* PNODE;

class stack
{
public:
PNODE Head;//data member //characteristic

stack()//default constructor
{
Head=NULL;
}

void Push(int value)//member function //behaviour
{
PNODE newn=NULL;
newn=new NODE;
newn->data=value;
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
}

int Pop()
{
if(Head==NULL)
{
printf("Stack is Empty\n");
return -1;
}
else
{
PNODE address=NULL;
address=Head;
int no=0;
no=Head->data;
Head=Head->next;
delete address;
return no;
}
}

void Display()
{
PNODE temp=Head;
cout<<"\nStack: ";
while(temp!=NULL)
{
cout<<temp->data<<" <- ";
temp=temp->next;
}
cout<<"Base\n";
}

};

int main()
{
stack obj;
for(int i=1;i<=10;i++)
{
obj.Push(i);
obj.Display();
}
cout<<"\nPoped element:"<<obj.Pop()<<"\n";

return 0;
}
