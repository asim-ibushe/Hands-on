void Reverse(PNODE Head)
{
while(Head!=NULL)
{
int rev=0;
no=Head->data;
while(no!=0)
{
rem=no%10;
rev=rev*10;
no=no/10;
}
Head=Head->next;
}
}
