//In this program we have to just add the statement wich deals with the previous pointer.
#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node* next;
struct Node* prev;
};
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head,int value)//parameter pointer to pointer of node to fucntion
{
PNODE newn=NULL;
newn=(PNODE) malloc(sizeof(NODE));
newn->data=value;
newn->next=NULL;
newn->prev=NULL;
if(*Head==NULL)
{
*Head=newn;
}
else
{
newn->next=*Head;
(*Head)->prev=newn;//existing first node ka prev point it to new
*Head=newn;
}
}

void InsertLast(struct Node** Head,int value)
{
struct Node* newn=NULL;
newn=(struct Node*) malloc(sizeof(struct Node));
newn->data=value;
newn->next=NULL;
newn->prev=NULL;
if(*Head==NULL)
{
*Head=newn;
}
else
{
struct Node* temp=*Head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newn;
newn->prev=temp;
}
}

void DeleteFirst(PPNODE Head)
{
if(*Head==NULL)
{
return;//empty ll
}
else if((*Head)->next==NULL)//only one element in ll
{
free(*Head);
*Head=NULL;//notify that no element in ll & First=NULL
}
else
{
*Head=(*Head)->next;
free((*Head) -> prev);
(*Head)->prev=NULL;
}
}

void DeleteLast(PPNODE Head)
{
if(*Head==NULL)
{
return;//empty ll
}
else if((*Head)->next==NULL)//only one element in ll
{
free(*Head);
*Head=NULL;
}
else
{
PNODE temp=*Head;
while(temp->next->next!=NULL)
{
temp=temp->next;
}
free(temp->next);
temp->next=NULL;
}
}

void Display(PNODE Head)
{
printf("Output:");
while(Head!=NULL)
{
printf(" |%d| <=>",Head->data);
Head=Head->next;
}
printf(" NULL\n");
}

int Count(struct Node* Head)
{
int icnt=0;
while(Head!=NULL)
{
icnt++;
Head=Head->next;
}
return icnt;
}

void InsertAtPos(PPNODE Head,int value,int pos)
{
int size=0;
size=Count(*Head);
if((pos<1)||(pos>size+1))
{
return;
}
if(pos==1)
{
InsertFirst(Head,value);
}
else if(pos==size+1)
{
InsertLast(Head,value);
}
else
{
PNODE temp=*Head;
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
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

void DeleteAtPos(PPNODE Head,int pos)
{
int size=0;
size=Count(*Head);
if((pos<1)||(pos>size))
{
return;
}
if(pos==1)
{
DeleteFirst(Head);
}
else if(pos==size)
{
DeleteLast(Head);
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

void DisplayX(PNODE Head)
{
if(Head==NULL)//if ll is empty
{return;}//if we donot add filter,throws seg fault error
while(Head->next!=NULL)//travel till last node
{
Head=Head->next;
}
printf("Reverse:");
while(Head!=NULL)
{
printf(" %d <=>",Head->data);//display all element in reverse
Head=Head->prev;
}
printf(" NULL\n");
}

int main()
{
int no=0,iRet=0;
PNODE First=NULL;//common pointer to node
printf("Enter a number:\n");
scanf("%d",&no);
InsertFirst(&First,no);//call by reference/address
printf("Enter a number:\n");
scanf("%d",&no);
InsertLast(&First,no);
printf("Enter a number:\n");
scanf("%d",&no);
InsertFirst(&First,no);
Display(First);//call by value
printf("Enter any number:\n");
scanf("%d",&no);
InsertAtPos(&First,no,3);
Display(First);
DisplayX(First);
DeleteFirst(&First);
Display(First);
DeleteLast(&First);
Display(First);
DeleteAtPos(&First,1);
Display(First);
iRet=Count(First);
printf("Total elements:%d\n",iRet);
return 0;
}
