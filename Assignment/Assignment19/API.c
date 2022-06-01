#include"Mylib.h"
void Pattern1(int row,int col)
{
    if(row!=col)
    {
        printf("Invalid input!! \n");
        return;
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i+j==row+1)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

////////////////////////////////////////

void Pattern2(int row,int col)
{
    if(row!=col)
    {
        printf("Invalid input!! \n");
        return;
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i+j==row+1)
            {
                printf("#\t");
            }
            else if(i+j>row+1)
            {
                printf("@\t");
            }
            else
            {
                printf("*\t");
            }
            
        }
        printf("\n");
    }
}

////////////////////////////////////

void Pattern4(int row,int col)
{
    if(row!=col)
    {
        printf("Invalid input!! \n");
        return;
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i+j<row+1)
            {
                if(i==1 || j==1 || i==row || j==col)
                {
                printf("*\t");
                }
                else
                {
                printf("#\t");
                }
            }
            else if(i+j>row+1)
            {
                if(i==1 || j==1 || i==row || j==col)
                {
                printf("*\t");
                }
                else
                {
                printf("$\t");
                }
            }
            else
            {
                printf("*\t");
            }
            
        }
        printf("\n");
    }
}

//////////////////////////

void Pattern5(int row,int col)
{
    if(row!=col)
    {
        printf("Invalid input!!\n");
        return;
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1 || i==row || j==1 || j==col || i==j)
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}