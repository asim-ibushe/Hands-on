#include"Header.h"

void InsertFirst(PPNODE Head,int no)
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));//memory allocated
newn->no=no;
newn->next=NULL;
if(*Head==NULL)//link list is empty
{
*Head=newn;
}
else//ll contains atleast one node in it
{
newn->next=*Head;
*Head=newn;
}
}


void Display(PNODE Head)
{
printf("LL= ");
while(Head!=NULL)
{
printf("\t%d",Head->no);
Head=Head->next;
}
printf("\n");
}
