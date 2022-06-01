//Dynamic implementation of stack using LL

//push
//pop
//display
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

void Push(PPNODE Head,int value)//InsertFirst
{
PNODE newn=(PNODE)malloc(sizeof(NODE));
newn->data=value;
newn->next=NULL;
if(*Head==NULL)
{
*Head=newn;
}
else
{
newn->next=*Head;
*Head=newn;
}
}
 
int Pop(PPNODE Head)//DeleteFirst
{
int no=0;
PNODE address=NULL;
if(*Head==NULL)
{
return -1;
}
else
{
no=(*Head)->data;
address=*Head;
*Head=(*Head)->next;
free(address);
return no;
}
}

void Display(PNODE Head)
{
printf("Stack Output:");
while(Head!=NULL)
{
printf(" |%d| <-",Head->data);
Head=Head->next;
}
printf("\n");
}

int Count(PNODE Head)
{
int counter=0;
while(Head!=NULL)
{
counter++;
Head=Head->next;
}
return counter;
}

int Peep(PNODE Head)
{
int no=0;
if(Head==NULL)
{
printf("Empty Stack\n");
}
else
{
no=Head->data
return no;
}
}

int main()
{
PNODE First=NULL;
int choice=1,no=0;
while(choice!=0)
{
printf("Enter your choice:\n");
	printf("\n 1:Push the Element");
	printf("\n 2:Pop the Element");
	printf("\n 3:Display the elements of stack");
	printf("\n 4:Peep: To display top most element");
	printf("\n Exit(0)\n=");
scanf("%d",&choice);
printf("\n-------------------------------------\n");
switch(choice)
{
case 1:
	printf("Enter the element to push:");
	scanf("%d",&no);
	Push(&First,no);
	break;
case 2:
	no=Pop(&First);
	if(no==-1)
	{
	printf("Stack is empty\n");
	}
	else
	{
	printf("Poped element is: %d\n",no);
	}
	break;
case 3:
	Display(First);
	break;
case 4:
	printf("Top most element is:%d",Peep(First));
	break; 
default: printf("Exit: Thank You\n");
}
printf("Total count of element:%d\n",Count(First));
printf("\n-------------------------------------\n");
}
return 0;
}
