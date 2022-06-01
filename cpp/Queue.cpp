//assignment43 paryanta
#include<iostream>
using namespace std;
struct node
{
int data;
struct node* next;
};
typedef struct node NODE;
typedef struct node* PNODE;

class Queue
{
private:
PNODE Head;
int isize;
public:
Queue();
void Enqueue(int);
int Dequeue();
void Display();
int Count();
};
Queue::Queue()
{
Head=NULL;
isize=0;
}
void Queue::Enqueue(int value)
{
PNODE newn=new NODE;
newn->data=value;
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
isize++;
}

int Queue::Dequeue()
{
if(Head==NULL)
{
cout<<"Queue is empty"<<endl;
return -1;
}
else
{
PNODE address=Head;
Head=Head->next;
int no=address->data;
delete address;
isize--;
return no;
}
}

inline void Queue::Display()
{
PNODE temp=Head;
cout<<"Elements in Queue: ";
while(temp!=NULL)
{
cout<<temp->data<<" -> ";
temp=temp->next;
}
cout<<"Tail\n";
}

inline int Queue::Count()
{
return isize;
}

int main()
{
cout<<"---------------------------------------";
cout<<"\nQueue Data Structure\n";
cout<<"---------------------------------------\n";
Queue q;
int choice=1,no=0;
while(choice)
{
cout<<"1.Enqueue\n2.Dequeue\n3.Exit(0)"<<endl;
cout<<"Choose any one =";
cin>>choice;
cout<<"\n---------------------------------------\n";
switch(choice)
{
case 1:
	cout<<"Enter integer:";
	cin>>no;
	q.Enqueue(no);
	break;
case 2:
	cout<<"Removed Element:"<<q.Dequeue()<<endl;
	break;
case 0:
	cout<<"Thank You"<<endl;
	break;
default:cout<<"Invalid choice"<<endl;
}
q.Display();
cout<<"Total count:"<<q.Count();
cout<<"\n---------------------------------------\n";
}
return 0;
}
