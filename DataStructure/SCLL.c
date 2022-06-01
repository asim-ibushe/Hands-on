#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node* next;
};
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;
void InsertFirst(PPNODE Head,PPNODE Tail,int value)
{
PNODE newn=NULL;
newn=(PNODE) malloc(sizeof(NODE));
newn->data=value;
newn->next=NULL;
if((*Head==NULL) && (*Tail==NULL))//if ll is empty
{
*Head=newn;
*Tail=newn;
}
else//already there is atleast one node in ll
{
newn->next=*Head;
*Head=newn;
}
(*Tail)->next=*Head;
}

void InsertLast(PPNODE Head,PPNODE Tail,int value)
{
PNODE newn=NULL;
newn=(PNODE) malloc(sizeof(NODE));
newn->data=value;
newn->next=NULL;
if((*Head==NULL) && (*Tail==NULL))//if ll is empty
{
*Head=newn;
*Tail=newn;
}
else//atleast one node already in ll
{
(*Tail)->next=newn;
*Tail=newn;
}
(*Tail)->next=*Head;
}

void Display(PNODE Head,PNODE Tail)
{
if((Head==NULL) && (Tail==NULL))//ll is empty
{
printf("LL IS EMPTY\n");
return;
}
printf("Output:");
do
{
printf(" |%d| ->",Head->data);
Head=Head->next;
}while(Head!=Tail->next);
printf(" PHead\n");
}

int Count(PNODE Head,PNODE Tail)
{
int icnt=0;
if((Head==NULL) && (Tail==NULL))//ll is empty
{
return 0;
}
do
{
icnt++;
Head=Head->next;
}while(Head!=Tail->next);
return icnt;
}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{
if((*Head==NULL) && (*Head==NULL))
{
return;
}
if(*Head==*Tail)//ll contains only one node
{
free(*Head);
*Head=NULL;
*Tail=NULL;
return;
}
else//contains more than one element
{
*Head=(*Head)->next;
free((*Tail)->next);
}
(*Tail)->next=*Head;
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
if((*Head==NULL) && (*Head==NULL))//ll is empty
{
return;
}
if(*Head==*Tail)//ll contains only one node
{
free(*Head);
*Head=NULL;
*Tail=NULL;
return;
}
else//contains more than one element
{
PNODE temp=*Head;
while(temp->next!=*Tail)
{
temp=temp->next;
}
free(*Tail);//temp->next;
*Tail=temp;
}
(*Tail)->next=*Head;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int value,int pos)
{
int size=Count(*Head,*Tail);
if((pos<1) || (pos>size+1))//invalid position
{
printf("INVALID POSITION\n");
return;
}
if(pos==1)
{
InsertFirst(Head,Tail,value);
}
else if(pos==size+1)
{
InsertLast(Head,Tail,value);
}
else
{
PNODE temp=*Head;
PNODE newn=NULL;
newn=(PNODE) malloc(sizeof(NODE));//dynamic memory alloc
newn->data=value;
newn->next=NULL;
for(int i=2;i<pos;i++)
{
temp=temp->next;
}
newn->next=temp->next;
temp->next=newn;
}
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos)
{
int size=Count(*Head,*Tail);
if((pos<1) || (pos>size))//invalid position
{
printf("INVALID POSITION\n");
return;
}
if(pos==1)
{
DeleteFirst(Head,Tail);
}
else if(pos==size)
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
PNODE address=temp->next;
temp->next=temp->next->next;
free(address);
}
}

int main()
{
int choice=1,no=0,pos=0;
printf("------------------------------------------");
printf("\nSINGLY CIRCULAR LINKED LIST\n");
printf("------------------------------------------\n");
PNODE First=NULL;
PNODE Last=NULL;
while(choice)
{
printf("Enter Your Choice:\n");
printf("1:Create LL\n2:Insert Node\n3:Delete Node\nExit:Press 0\n=");
scanf("%d",&choice);
switch(choice)
{
case 1:
if((First==NULL)&&(Last==NULL))
{
	printf("Enter Number:");
	scanf("%d",&no);
	InsertFirst(&First,&Last,no);
}
else
{
printf("LL is alredy created, plz try insertion or deletion.\n");
}
	break;

case 2:
	printf("Enter Num & Position where to Insert:\n");
	scanf("%d%d",&no,&pos);
	InsertAtPos(&First,&Last,no,pos);
	break;
case 3:
	printf("Enter Node Position to Delete:\n");
	scanf("%d",&pos);
	DeleteAtPos(&First,&Last,pos);
	break;
}
printf("------------------------------------------\n");
Display(First,Last);
printf("TotalCount=%d\n",Count(First,Last));
printf("------------------------------------------\n");
}

return 0;
}
