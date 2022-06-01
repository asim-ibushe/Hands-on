#include"Header.h"
void Pattern1(int row,int col)
{
    if (row<0 || col<0)
    {
        printf("Invalid row or column input,Error!!\n");
        return;
    }

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

//////////////////////////////////////

void Pattern2(int row,int col)
{
    if (row<0 || col<0)
    {
        printf("Invalid row or column input,Error!!\n");
        return;
    }

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

///////////////////////////////

void Pattern3(int row,int col)
{
    if (row<0 || col<0)
    {
        printf("Invalid row or column input,Error!!\n");
        return;
    }

    for(int i=1;i<=row;i++)
    {
        for(int j=col;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

/////////////////////////////

void Pattern4(int row,int col)
{
    if (row<0 || col<0)
    {
        printf("Invalid row or column input,Error!!\n");
        return;
    }

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j%2==0)
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

void Pattern5(int row,int col)
{
    if (row<0 || col<0)
    {
        printf("Invalid row or column input,Error!!\n");
        return;
    }

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}