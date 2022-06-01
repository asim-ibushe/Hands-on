#include"Header.h"
void Pattern1(int row,int col)
{
    if(row==0 || col==0)
    {
        printf("Invalid Input!!\n");
        return;
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i>=j)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

///////////////////////////

void Pattern2(int row,int col)
{
    if(row==0 || col==0)
    {
        printf("Invalid Input!!\n");
        return;
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i+j<=row+1)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

////////////////////////////////

void Pattern3(int row,int col)
{
    if(row==0 || col==0)
    {
        printf("Invalid Input!!\n");
        return;
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i>j)
            {
                printf("#\t");
            }
            else if(i==j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

/////////////////////////////////

void Pattern4(int row,int col)
{
    if(row==0 || col==0)
    {
        printf("Invalid Input!!\n");
        return;
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1||i==row||j==1||j==col||i==j)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
            
        }
        printf("\n");
    }
}

//////////////////////////

void Pattern5(int row,int col)
{
    if(row==0 || col==0)
    {
        printf("Invalid Input!!\n");
        return;
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j>=i)
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