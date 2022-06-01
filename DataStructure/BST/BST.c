#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* Lchild;
struct node* Rchild;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE Root,int value)
{
PNODE temp=*Root;
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));//memory allocation
newn->data=value;
newn->Lchild=NULL;
newn->Rchild=NULL;

if(*Root==NULL)//if it is first element in tree,assign as root
{
*Root=newn;
}
else
{
while(1)
{
if(temp->data==value)
{
printf("Element already present");
free(newn);
break;
}

if(value<(temp->data))//if entered no is less than
{
	if((temp->Lchild)==NULL)
	{
	temp->Lchild=newn;
	break;
	}
temp=temp->Lchild;
}
else if(value>(temp->data))
{
	if((temp->Rchild)==NULL)
	{
	temp->Rchild=newn;
	break;
	}
temp=temp->Rchild;
}
}
}
}

int Search(PNODE Root,int value)
{
while(Root!=NULL)
{
if(Root->data==value)
{
break;
}
if(value<Root->data)
{
Root=Root->Lchild;
}
else
{
Root=Root->Rchild;
}
}
if(Root==NULL)
{
return 0;
}
else
{
return 1;
}
}

void Inorder(PNODE Root)
{
if(Root!=NULL)
{
Inorder(Root->Lchild);
printf("%d\t",Root->data);
Inorder(Root->Rchild);
}
}

int main()
{
PNODE First=NULL;
Insert(&First,30);
Insert(&First,10);
Insert(&First,40);
if(Search(First,30)==1)
{
printf("Element Found\n");
}

Inorder(First);
return 0;
}
