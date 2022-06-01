/*
WAP which accepts no of rows and column from user and display the below pattern.
input: row=4 and col=4
output:
 j	 1 2 3 4	    1   2    3    4
i	1* * * *	1[1,1][1,2][1,3][1,4]
	2$ $ $ $	2[2,1][2,2][2,3][2,4]
	3* * * *	3[3,1][3,2][3,3][3,4]
	4$ $ $ $	4[4,1][4,2][4,3][4,4]
according to the above matrix we conclude that at even number of row we have to display dollar and at odd no of row we have to display *
*/
#include<stdio.h>
void Pattern(int row,int col)
{
for(int i=1;i<=row;i++)
{

if(i%2==0)
	{
	for(int j=1;j<=col;j++)
	{
	printf("$\t");
	}
	}
else
	{
	for(int j=1;j<=col;j++)
	{
	printf("*\t");
	}
	}
printf("\n");
printf("\n");
}
}

void PatternX(int row,int col)//if else condition gets checked i*j times (a little more conditon check)
{
for(int i=1;i<=row;i++)
{

	for(int j=1;j<=col;j++)
	{
	if(i%2==0)
	printf("$\t");
	
	else
	printf("*\t");	
	}
printf("\n");
printf("\n");
}
}

void PatternXX(int row,int col)
{
char ch='\0';
for(int i=1;i<=row;i++)
{
if(i%2==0)
ch='$';
else
ch='*';

	for(int j=1;j<=col;j++)
	{
	printf("%c \t",ch);
	}
printf("\n");
printf("\n");
}
}

void PatternXXX(int row,int col)
{
char arr[2]={'$','*'};
for(int i=1;i<=row;i++)
{
for(int j=1;j<=col;j++)
{
	printf("%c\t",arr[i%2]);
}
printf("\n");
}
}


int main()
{
int row,col;
printf("Enter no of rows and col:\n");
scanf("%d%d",&row,&col);
PatternXXX(row,col);
return 0;
}
