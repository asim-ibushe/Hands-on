//WAP accept the row and columns from user from user and display below pattern
/*
input:row:4	column:4
output:
 1 2 3 4
1* # # #
2# * # #
3# # * #
4# # # *
*/
#include<stdio.h>
void Pattern(int row,int col)
{
//updater for negative value
if(row<0)
row=-row;

if(col<0)
col=-col;

if (row!=col)//filter for the non square matrix
{
printf("Invalid Argument passed!!!");
return;
}

for(int i=1;i<=row;i++)
{
	for(int j=1;j<=col;j++)
	{
	if(i==j)//for diagonal element
	{
	printf("*\t");
	}
	else
	{
	printf("#\t");//for non-diagonal element
	}
	}
printf("\n");
}
}

int main()
{
int row,col;
printf("Enter size of row and column :");
scanf("%d%d",&row,&col);
Pattern(row,col);
return 0;
}
