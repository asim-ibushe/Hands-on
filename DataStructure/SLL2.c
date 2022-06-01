#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE; 
/*
1.allocate memory for node.
2.init that node.
3.check wheter empty and insert at first pos else other.
*/
void InsertFirst(PPNODE Head,int value)
{
PNODE newn=NULL;
newn=(PNODE) malloc(sizeof(NODE));

newn->data=value;
newn->next=NULL;

if(*Head==NULL)//if ll is empty
{
*Head=newn;
}
else//if ll contains atleast one node
{
newn->next=*Head;
*Head=newn;
}
}

/*if(*Head==NULL)
{
printf("No Elements\n")
}*/
void DeleteFirst(PPNODE Head)
{
PNODE temp=*Head;
if(*Head !=NULL)
{
*Head=(*Head) ->next;
free(temp);
}
}

void Display(PNODE Head)
{
printf("\nList=");
while(Head!=NULL)
{
printf("| %d | -> ",Head->data);
Head=Head->next;
}
printf("NULL\n");
}

int Count(PNODE Head)
{
int icnt=0;
while(Head!=NULL)
{
icnt++;
Head=Head->next;
}
return icnt;
}

void InsertLast(PPNODE Head,int value)
{
PNODE newn=NULL;
newn=(PNODE) malloc(sizeof(NODE));
newn->data=value;
newn->next=NULL;
PNODE temp=NULL;
if(*Head==NULL)
{
*Head=newn;
}
else
{
//link list contain atleast one node
//travel till the last node
temp=*Head;//store the address of first node
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newn;
}
}

void DeleteLast(PPNODE Head)
{
PNODE temp=*Head;
if(*Head==NULL)//no element in ll
{
return;
}
else if((*Head)->next==NULL)//single element in ll
{
free(*Head);
*Head=NULL;
}
else
{
while(temp->next->next !=NULL)
{
temp=temp->next;
}
free(temp->next);
temp->next=NULL;
}
}
/*
todo:
*invalid pos-return
*first pos-call insert fisrt
*last pos-call insert last
*position in between-write separate logic
*/
void InsertAtPos(PPNODE Head,int value,int pos)
{
int size=0,i=0;
PNODE newn=NULL;
PNODE temp=*Head;
size=Count(*Head);
if((pos<1) || (pos>(size+1)))
{
return;//invalid position
}
if(pos==1)
{
InsertFirst(Head,value);//insert at first
}
else if(pos==size+1)
{
InsertLast(Head,value);//insert at last
}
else
{
newn=(PNODE) malloc(sizeof(NODE));
newn->data=value;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
newn->next=temp->next;
temp->next=newn;
}
}
/*
 PNODE Temp = *Head;
 
 // Loop 1
 // 100 200 300 400 500 NULL
 while(temp != NULL)
 {
    temp = temp ->next;
 }
[temp=NULL]///////////////////////////
 
 // Loop 2
 // 100 200 300 400 500
 while(temp->next != NULL)
 {
    temp = temp ->next;
 }
[temp=500]/////////////////////////
 
 // Loop 3
 // 100 200 300 400
 while(temp->next->next != NULL)
 {
    temp = temp ->next;
 }
[temp=400]///////////////////////
*/
void DeleteAtPos(PPNODE Head,int pos)
{
int size=0;
size=Count(*Head);
if((pos<1)||(pos>size))
{
return;
}
PNODE temp=*Head;

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
for(int i=1;i<pos-1;i++)
{
temp=temp->next;
}
PNODE temp2=temp->next;
temp->next=temp2->next;
free(temp2);
}
}


int main()
{
PNODE First=NULL;
int no=0;
printf("Enter Number:");
scanf("%d",&no);
InsertLast(&First,no);
Display(First);
printf("Enter Number:");
scanf("%d",&no);
InsertLast(&First,no);
Display(First);
printf("Enter Number:");
scanf("%d",&no);
InsertLast(&First,no);
Display(First);
printf("Number of elements in linked list are:%d\n",Count(First));
InsertAtPos(&First,5,1);
printf("Number of elements in linked list are:%d\n",Count(First));
Display(First);
printf("After deletion:\n");
DeleteAtPos(&First,3);
Display(First);
return 0;
}
