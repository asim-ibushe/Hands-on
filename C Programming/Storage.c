#include<stdio.h>
int X=51; //extern storage class, global variable
// extern int no;// only if no is present in external file
void Demo()
{
int no=11;
auto int Data=21;
int Y;
register int A=51; //local variable A of type int initialized to 51 of storage class register

static int stationary=10;//use of static storage class
stationary++;
printf("%d\n",stationary);
}

int main()
{
int i=10; //implicitly auto storage class
auto int j=20;// local variable with auto storage class

Demo();

printf("Address of i var is : %p and its size in byte is %d \n",&i,sizeof(i));
return 0;
}
