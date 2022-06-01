#include"Header.h"
int main()
{
int no=0;
struct Node *First=NULL;
for(int i=1;i<=10;i++)
{
InsertFirst(&First,i);
}

//struct Node obj;//static memory alloc
//printf("%d",sizeof(obj));
Display(First);
return 0;
}
