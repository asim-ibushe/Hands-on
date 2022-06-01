#include<stdio.h>

void Display_pattern(int row,int col)
{
for(int i=1;i<=row;i++)
{
	for(int j=1;j<=col;j++)
	{
	printf("* \t");	
	}
printf("\n");
}
}

int main()
{
int row,col;
printf("Enter no of rows and col:\n");
scanf("%d%d",&row,&col);
Display_pattern(row,col);
return 0;
}
