// Write a program which displays below pattern
// Input : 6	6	
/*
	 1	2	3	4	5	6
	1&	*	*	*	*	*
	2*	&	1	2	3	*
	3*	A	&	4	5	*
	4*	B	C	&	6	*
	5*	D	E	F	&	*
	6*	*	*	*	*	&
*/
import java.io.*;
import java.util.*;
class Pattern
{
void Display(int iRow,int iCol)
{
if((iRow!=iCol) || (iRow<=0) || (iCol<=0))
{
System.out.println("Invalid Input!!");
return;
}
char Alpha='A';
int num=1;
System.out.println();
for(int i=1;i<=iRow;i++)
{
	for(int j=1;j<=iCol;j++)
	{
	if(i==j)//diagonal
	{
	System.out.print("&\t");
	}
	else if((i==1) || (j==iRow) || (j==1) || (i==iCol))//border
	{
	System.out.print("*\t");
	}
	else if(i>j)//lower triangular matrix
	{
	System.out.print(Alpha+"\t");
	Alpha++;
	}
	else//upper triangular matrix
	{
	System.out.print(num+"\t");
	num+=1;
	}
	}
System.out.println();
System.out.println();
}
}
}

class Main
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter count of rows & columns:");
int row=sc.nextInt();
int col=sc.nextInt();
Pattern p=new Pattern();
p.Display(row,col);
}
}
