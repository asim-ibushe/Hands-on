#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int countD(int ino)
{
int D_rev=0,rem=0;
while(ino!=0)
{
rem=ino%10;
ino=ino/10;
D_rev=(D_rev*10)+rem;
}
return D_rev;
}

void Pattern(int row,int col)
{
for(int i=1;i<=row;i++)
{
for(int j=1;j<=col;j++)
{
if(i==j)
printf("*\t");

else if(i>j)
printf("$\t");

else
printf("#\t");
}
printf("\n");
}
}

int sumNumbers(int arr[],int size)
{
int imin=arr[0];
for(int i=0;i<size;i++)
{
if(arr[i]<imin)
imin=arr[i];

}
return imin;
}

/*void fibo(int ino)
{
int first=0,second=1,third=0;
printf("Output:\n");
int matrix=(int)sqrt(ino);
for(int i=0;i<matrix;i++)
{
for(int j=0;j<matrix;j++)
{

for(int no=1;no<=ino;i++)
{
printf("%d",first);
third=first+second;
first=second;
second=third;
}


}
printf("\n");
}

}
*/
int main()
{
int size=0;
int *ptr=NULL;
printf("%d",(int)sizeof(ptr));
printf("\nEnter count of Array:");
scanf("%d",&size);
//fibo(size);
return 0;
}
