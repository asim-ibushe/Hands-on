#include<stdio.h>
#include<stdlib.h>
struct Node
{
struct Node* prev;
int data;
struct Node* next;
};
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertLast(PPNODE Head,PPNODE Tail,int value)//1
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=value;
newn->next=NULL;
newn->prev=NULL;
if((*Head==NULL) && (*Tail==NULL))//ll is empty
{
*Head=newn;
*Tail=newn;
}
else//ll contains atleast one node
{
(*Tail)->next=newn;
newn->prev=*Tail;
*Tail=(*Tail)->next;//*Tail=newn;
}
(*Tail)->next=*Head;//no matter which one of above is executed,both of these instruction are needed to maintian circular nature of LL
(*Head)->prev=*Tail;
}

void InsertFirst(PPNODE Head,PPNODE Tail,int value)//2
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=value;
newn->next=NULL;
newn->prev=NULL;
if((*Head==NULL) && (*Tail==NULL))//LL is empty
{
*Head=newn;
*Tail=newn;
}
else//ll contain atleast one element
{
newn->next=*Head;
(*Head)->prev=newn;
*Head=newn;//*Head=(*Head)->prev
}
(*Tail)->next=*Head;
(*Head)->prev=*Tail;
}

void Display(PNODE Head,PNODE Tail)//3//call by value
{

if(Head==NULL && Tail==NULL)//if LL is empty, filter to avoid segmentation runtime exception
{
return;
}
printf("Circular LL: PLastNode <=>");
do
{
printf(" |%d| <=>",Head->data);
Head=Head->next;
}while(Head!=Tail->next);
printf(" PFirstNode\n");
/*
PNODE temp=Head;
printf("Circular LL:");
printf(" PLastNode <=>");
while(temp->next!=Head)
{
printf(" |%d| <=>",temp->data);
temp=temp->next;
}
printf(" |%d| <=>",temp->data);
printf(" PFirstNode\n");
*/
}

int Count(PNODE Head,PNODE Tail)//4
{
if(Head==NULL && Tail==NULL)
return 0;

int Counter=0;
do
{
Counter++;
Head=Head->next;
}while(Head!=Tail->next);
return Counter;
}

void DeleteFirst(PPNODE Head,PPNODE Tail)//5
{
if((*Head==NULL) && (*Tail==NULL))//ll is empty
{
return;
}
if(*Head==*Tail)//LL contains only one element
{
free(*Head);
*Head=NULL;
*Tail=NULL;
return;
}
else
{
*Head=(*Head)->next;
free((*Tail)->next);
(*Tail)->next=*Head;
(*Head)->prev=*Tail;
}
}

void DeleteLast(PPNODE Head,PPNODE Tail)//6
{
if((*Head==NULL) && (*Tail==NULL))//ll is empty
{
return;
}

if(*Head==*Tail)//LL contains only one element
{
free(*Head);
*Head=NULL;
*Tail=NULL;
return;
}
else
{
*Tail=(*Tail)->prev;
free((*Tail)->next);//free((*Head)->prev);
(*Tail)->next=*Head;
(*Head)->prev=*Tail;
}
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int value,int pos)//7
{
int count=0;
count=Count(*Head,*Tail);
if((pos<1) || (pos>count+1))
{
return;
}//ll is empty

if(pos==1)//inserting at first position
{
InsertFirst(Head,Tail,value);
}
else if(pos==count+1)//inserting at last position
{
InsertLast(Head,Tail,value);
}
else//in between somewhere
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

void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos)//8
{
int cnt=0;
cnt=Count(*Head,*Tail);
if((pos<1) || (pos>cnt))
{
return;//invalid position provided
}
if(cnt==1)//deleting if pos if first
{
DeleteFirst(Head,Tail);
}
else if(pos==cnt)//deleting if pos is last
{
DeleteLast(Head,Tail);
}
else//deleting node in somwhere between
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



int main()
{
PNODE First=NULL;
PNODE Last=NULL;
int no=0,size=0;
printf("ENTER size CIRCULAR LL:\n\n");
scanf("%d",&size);
for(int i=1;i<=size;i++)
{
InsertLast(&First,&Last,i);
}
Display(First,Last);
printf("Total Elements in LL:%d\n",Count(First,Last));
DeleteFirst(&First,&Last);
DeleteLast(&First,&Last);
InsertAtPos(&First,&Last,100,4);
Display(First,Last);
DeleteAtPos(&First,&Last,4);
Display(First,Last);
return 0;
}
