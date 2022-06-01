#include"Header.h"

void Pattern1(int row,int col)
{
    if(row<0 || col<0)
    {
        printf("Invalid input,Error!!!\n");
        return;
    }
    char c='A';
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            printf("%c\t",c);
            c++;
        }
        c='A';
        printf("\n");
    }
}

///////////////////////////////////

void Pattern2(int row,int col)
{
    if(row<0 || col<0)
    {
        printf("Invalid input,Error!!!\n");
        return;
    }
    char Caps_c='A',c='a';
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i%2==0)
            {
                printf("%c\t",c);
                c++;
            }
            else
            {
                printf("%c\t",Caps_c);
                Caps_c++;
            }
        }
        c='a',Caps_c='A';
        printf("\n");
    }
}

/////////////////////////////////////////

void Pattern3(int row,int col)
{
    if(row<0 || col<0)
    {
        printf("Invalid input,Error!!!\n");
        return;
    }
    char c='A';
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            printf("%c\t",c);
        }
        c++;
        printf("\n");
    }
}

///////////////////////////////

void Pattern4(int row,int col)
{
    if(row<0 || col<0)
    {
        printf("Invalid input,Error!!!\n");
        return;
    }
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=col;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}

////////////////////////////////////

void Pattern5(int row,int col)
{
    if(row<0 || col<0)
    {
        printf("Invalid input,Error!!!\n");
        return;
    }
    int counter=1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            printf("%d\t",counter);
            counter++;
        }
        printf("\n");
    }
}