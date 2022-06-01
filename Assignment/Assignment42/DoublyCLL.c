#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node* next;
struct Node* prev;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int value)
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=value;
newn->prev=NULL;
newn->next=NULL;

if((*Head==NULL)&&(*Tail==NULL))//Linked List is empty
{
*Head=newn;
*Tail=newn;
}
else //there is atleast one element in LL
{
newn->next=*Head;
(*Head)->prev=newn;
*Head=newn;
}
(*Tail)->next=*Head;
(*Head)->prev=*Tail;
}

void InsertLast(PPNODE Head,PPNODE Tail,int value)
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));

newn->data=value;
newn->prev=NULL;
newn->next=NULL;

if((*Head==NULL)&&(*Tail==NULL))
{
*Head=newn;
*Tail=newn;
}
else
{
(*Tail)->next=newn;
newn->prev=*Tail;
*Tail=(*Tail)->next;
}
(*Tail)->next=*Head;
(*Head)->prev=*Tail;
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
if((*Head==NULL)&&(*Tail==NULL))
{
return;
}
if(*Head==*Tail)
{
free(*Head);
*Head=NULL;
*Tail=NULL;
}
else
{
*Head=(*Head)->next;
free((*Head)->prev);
(*Tail)->next=*Head;
(*Head)->prev=*Tail;
}
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
if((*Head==NULL)&&(*Tail==NULL))
{
return;
}
if(*Head==*Tail)
{
free(*Head);
*Head=NULL;
*Tail=NULL;
}
else
{
*Tail=(*Tail)->prev;
free((*Tail)->next);
(*Tail)->next=*Head;
(*Head)->prev=*Tail;//maintain the circular nature
}
}

int Count(PNODE Head,PNODE Tail)
{
int cnt=0;
if((Head==NULL)&&(Tail==NULL))
{
return cnt;
}
do
{
cnt++;
Head=Head->next;
}while(Head!=Tail->next);
return cnt;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int value,int pos)
{
int Total=Count(*Head,*Tail);
if((pos<1)||(pos>Total+1))
{
return;
}
if(pos==1)
{
InsertFirst(Head,Tail,value);
}
else if(pos=Total+1)
{
InsertLast(Head,Tail,value);
}
else
{
PNODE temp=*Head;
PNODE newn=NULL;
newn=(PNODE) malloc(sizeof(NODE));
newn->data=value;
newn->next=NULL;
newn->prev=NULL;
for(int i=2;i<pos;i++)
{
temp=temp->next;
}
newn->next=temp->next;
temp->next->prev=newn;
temp->next=newn;
newn->prev=temp;
}
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos)
{
int Total=Count(*Head,*Tail);
if((pos<1)||(pos>Total))
{
return;
}
if(pos==1)
{
DeleteFirst(Head,Tail);
}
else if(pos=Total)
{
DeleteLast(Head,Tail);
}
else
{
PNODE temp=*Head;
for(int i=2;i<pos;i++)
{
temp=temp->next;
}
temp->next=temp->next->next;
free(temp->next->prev);
temp->next->prev=temp;
}
}

void Display(PNODE Head,PNODE Tail)
{
if((Head==NULL)&&(Tail==NULL))
{
printf("\nEmpty\n");
return;
}
printf("Ptr to Tail <->");
do
{
printf(" |%d| <->",Head->data);
Head=Head->next;
}while(Head!=Tail->next);
printf(" Ptr to Head\n");
}

int main()
{
PNODE First=NULL;
PNODE Last=NULL;
int no=0;

printf("Enter number:");
scanf("%d",&no);
InsertFirst(&First,&Last,no);
printf("Enter number:");
scanf("%d",&no);
InsertLast(&First,&Last,no);
printf("Enter number:");
scanf("%d",&no);
InsertLast(&First,&Last,no);
Display(First,Last);
printf("Total elements are:%d",Count(First,Last));	
DeleteFirst(&First,&Last);
DeleteLast(&First,&Last);
DeleteFirst(&First,&Last);
Display(First,Last);
printf("Enter number:");
scanf("%d",&no);
InsertAtPos(&First,&Last,no,2);
return 0;
}
