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
void InsertFirst(PPNODE Head,int value)//1
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=value;
newn->next=NULL;
if(*Head==NULL)//if ll is empty & no elements found
{
*Head=newn;
}
else
{
newn->next=*Head;
*Head=newn;
}
}
void DeleteFirst(PPNODE Head)//2
{
PNODE temp=*Head;
if(*Head!=NULL)
{
*Head=(*Head)->next;
free(temp);
}
}

void InsertLast(PPNODE Head,int value)//3
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=value;
newn->next=NULL;
PNODE temp=NULL;

if(*Head==NULL)//if there are no elements in ll,last insertion will be first node of ll
{
*Head=newn;
}
else
{
temp=*Head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newn;
}
}
void DeleteLast(PPNODE Head)//4
{
PNODE temp=*Head;
if(*Head==NULL)//no element in link list
{
return;
}
else if((*Head)->next==NULL)//one element in ll
{
free(*Head);
*Head=NULL;
}
else//else travel till end and delete last node of ll
{
while(temp->next->next!=NULL)
{
temp=temp->next;
}
free(temp->next);
temp->next=NULL;
}
}

int Count(PNODE Head)//8
{
int counter=0;
while(Head!=NULL)
{
Head=Head->next;
counter++;
}
return counter;
}
void InsertAtPos(PPNODE Head,int value,int pos)//5
{
int size=Count(*Head);
PNODE temp=*Head;
PNODE newn=NULL;
if((pos<1) || (pos>size+1))
{
return;//invalid position
}
if(pos==1)//if it is first node to be inserted
{
InsertFirst(Head,value);
}
else if(pos==(size+1))//if it is last node to be inserted
{
InsertLast(Head,value);
}
else
{
newn=(PNODE) malloc(sizeof(NODE));
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
void DeleteAtPos(PPNODE Head,int pos)//6
{
int size=Count(*Head);
if((pos<1) && (pos>size))
{
return;//invalid position
}
if(pos==1)//if element to be deleted is first node
{
DeleteFirst(Head);
}
else if(pos==size)
{
DeleteLast(Head);
}
else
{
PNODE temp=*Head,address=NULL;
for(int i=2;i<pos;i++)
{
temp=temp->next;
}
address=temp->next;
temp->next=address->next;
free(address);
}
}

void Display(PNODE Head)//7
{
printf("Output:");
while(Head!=NULL)
{
printf("\t[%d]->",Head->data);
Head=Head->next;
}
printf("\tNULL\n");
}
//////////////////////////////////////
//Write a program which search first occurrence of particular element from singly linear linked list
int SearchFirstOcc(PNODE Head,int no)
{
int count=0;
while(Head!=NULL)
{
count++;
if(Head->data==no)
{
break;
}
Head=Head->next;
}
if(Head->data==no)
{
return count;
}
else
{
return -1;
}
}
//Write a program which search last occurrence of particular element from singly linear linked lis
int SearchLastOcc(PNODE Head,int no)
{
int last=-1,icnt=0;
while(Head!=NULL)
{
icnt++;
if(Head->data==no)
{
last=icnt;
}
Head=Head->next;
}
return last;
}

//Write a program which returns addition of all element from singly linear linked list.
int Addition(PNODE Head)
{
int isum=0;
while(Head!=NULL)
{
isum=isum+(Head->data);
Head=Head->next;
}
return isum;
}

//Write a program which return largest element from singly linear linked list
int Maximum(PNODE Head)
{
if(Head==NULL)//if i do not provide filter over here//it will give me seg fault at line219
{
return -1;
}
int iMax=Head->data;
while(Head!=NULL)
{
if((Head->data)>iMax)
{
iMax=Head->data;
}
Head=Head->next;
}
return iMax;
}

//Write a program which return smallest element from singly linear linked list.
int Minimum(PNODE Head)
{
if(Head==NULL)
{
return -1;
}
int iMin=Head->data;
while(Head!=NULL)
{
if((Head->data)<iMin)
{
iMin=Head->data;
}
Head=Head->next;
}
return iMin;
}

int main()
{
PNODE First=NULL;
int no=0,iRet=0;
char choice='\0';
do
{
printf("Enter Integer value: ");
scanf("%d",&no);
InsertLast(&First,no);
printf("Do you want to insert more elements:\nPress 'y':Yes \nor\n Press 'n':No \n=");
scanf(" %c",&choice);
}
while((choice=='y') || (choice=='Y'));
printf("Sum of all elements in LL is:%d\n",Sum_ElementLL(First));
return 0;
printf("Enter Element to search: ");
scanf("%d",&no);
iRet=SearchFirstOcc(First,no);
if(iRet==-1)
{
printf("Element Not Found\n");
}
else
{
printf("First Position where Element Found:%d\n",iRet);
}
////
iRet=SearchLastOcc(First,no);
if(iRet==-1)
{
printf("Element Not Found\n");
}
else
{
printf("Last Position where Element Found:%d\n",iRet);
}
/*
InsertFirst(&First,7);
Display(First);
//DeleteFirst(&First);
//Display(First);
InsertLast(&First,8);
InsertLast(&First,6);
InsertFirst(&First,4);
Display(First);
DeleteAtPos(&First,3);
DeleteLast(&First);
*/
Display(First);
printf("Total no of element in ll are:%d\n",Count(First));
return 0;
}
