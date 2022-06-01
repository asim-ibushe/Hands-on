
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

//Write a program which displays all elements which are perfect from singly linear linked list.
int DisplayPerfect(PNODE Head)
{
if(Head==NULL)
{
printf("LL is Empty\n");
return -1;
}
int iSum=1;
int ino=Head->data;
printf("Perfect Numbers form LL:");
while(Head!=NULL)
{
iSum=1;
ino=Head->data;
if(ino<0)//filter for neg values
{
ino=-ino;
}
for(int i=2;i<=ino/2;i++)
{
if(ino%i==0)
{
iSum+=i;
}
if(iSum>ino)
break;

}
if(iSum==ino)
{
printf(" |%d| <=>",Head->data);
}
Head=Head->next;
}
printf("\n");
}

//Write a program which displays all elements which are prime from singly linear linked list.
int DisplayPrime(PNODE Head)
{
if(Head==NULL)
{
printf("LL is Empty\n");
return -1;
}
printf("Prime Number :");
int Flag=1,ino=Head->data;
while(Head!=NULL)
{
Flag=1;
for(int i=2;i<ino;i++)
{
if(ino%i==0)
{
Flag=0;
break;
}
}
if(Flag==1)
{
printf(" |%d| <=>",Head->data);
}
Head=Head->next;
}
printf("\n");
}

//Write a program which returns addition of all even element from singly linear linked list
int AdditionEven(PNODE Head)
{
int iSum=0;
while(Head!=NULL)
{
if((Head->data)%2==0)
{
iSum+=Head->data;
}
Head=Head->next;
}
return iSum;
}

//Write a program which return second maximum element from singly linear linked list.
int sec_Max(PNODE Head)
{
int Max=(Head->data),prev=0;
while(Head!=NULL)
{
if((Head->data)>Max)
{
prev=Max;
Max=Head->data;
}
Head=Head->next;
}
return prev;
}

//Write a program which display addition of digits of element from singly linear linked list.
void Display_AOD(PNODE Head)
{
int no=0,rem=0,sumD=0;
printf("Output:\n");
while(Head!=NULL)
{
sumD=0;
no=Head->data;
if(no<0)
{
no=-no;
}
rem=0;
while(no!=0)
{
rem=no%10;
sumD+=rem;
no=no/10;
}
printf("Element:%d\tAddition:%d\n",no,sumD);
Head=Head->next;
}
}
