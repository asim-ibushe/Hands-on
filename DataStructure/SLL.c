#include<stdio.h>
#include<stdlib.h>
//structure definition
struct Node
{
int data;
struct Node *next;
};

typedef struct Node NODE; //node defination
typedef struct Node * PNODE;//pointer to node
typedef struct Node ** PPNODE;//pointer to (pointer of node)

//Function name: InsertFirst()
//Description: used to insert at first position
//Parameter: Address of Head & any integer
//Return: void
void InsertFirst(PPNODE Head,int no)
{
PNODE newn= NULL;
newn=(PNODE)malloc(sizeof(NODE));//Allocate memory 
newn-> data=no;//init data
newn->next=NULL;//init pointer

if(*Head==NULL)//linkedlist is empty
{
*Head=newn;
}
else
{
newn -> next =*Head;
*Head=newn;
}
}

//Function name: InsertFirst()
//Description: used to insert at first position
//Parameter: Address of Head & any integer
//Return: void
void InsertLast(PPNODE Head,int no)
{
PNODE newn=NULL;
PNODE temp=*Head;
newn=(PNODE) malloc(sizeof(NODE));
newn->data=no;
newn->next=NULL;

if(*Head==NULL)
{
*Head=newn;
}
else
{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newn;
}
}

//Function name: Display()
//Description: Used to display elements of LL
//Parameters: First pointer
//Return Value: void
void Display(PNODE Head)
{
printf("Linked List:");
while(Head!=NULL)
{
printf("\t%d",Head->data);
Head=Head->next;
}
printf("\n");
}

//Function name: Count()
//Description: return count of elements in LL
//Parameters: First pointer
//Return Value: integer
int Count(PNODE Head)//same as strlen() method
{
int count=0;
while(Head!=NULL)
{
count++;
//printf("\t%d",Head->data);
Head=Head->next;
}
return count;
}

int main()
{
PNODE First =NULL;
for(int i=1;i<=10;i++)
{
InsertLast(&First,i);
}
InsertFirst(&First,0);//call by address
printf("Total No of elements in LL:%d\n",Count(First));
Display(First);//call by value,this is not going to affect as stack frame gets change as soon as Display function is called and value of First gets copied in local variable Head of Display function
return 0;
}
/*
ToDo List----
Fun:
InsertFirst
InsertLast
InsertAtPos
DeleteFirst
DeleteLast
DeleteFPos
Display
Count
*/
