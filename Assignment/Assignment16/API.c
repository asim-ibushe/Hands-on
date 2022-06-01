#include"Header.h"
void Pattern1(int row,int col)
{
    int counter=1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(counter<10)
            {
                printf("%d\t",counter);
                counter++;
            }
            else
            {
                counter=1;
                printf("%d\t",counter);
                counter++;                
            }
        }
        printf("\n");
    }
}
//////////////////////////////////

void Pattern2(int row,int col)
{
    int Odd=1,Even=2;
    for(int i=1;i<=row;i++)
    {
        Odd=1,Even=2;
        for(int j=1;j<=col;j++)
        {
            if(i%2==0)
            {
                printf("%d\t",Odd);
                Odd+=2;
            }
            else
            {
                printf("%d\t",Even);
                Even+=2;
            }
            
            
        }
        printf("\n");
    }
}

////////////////////////////////
void Pattern3(int row,int col)
{
    char Alpha='a';
    int Num=1;
    for(int i=1;i<=row;i++)
    {
        Alpha='a',Num=1;
        for(int j=1;j<=col;j++)
        {
            if(i%2==0)
            {
                printf("%d\t",Num);
                Num++;
            }
            else
            {
                printf("%c\t",Alpha);
                Alpha++;
            }
            
            
        }
        printf("\n");
    }
}

/////////////////////////////
void Pattern4(int row,int col)
{
    int Pos=1,Neg=-1;
    for(int i=1;i<=row;i++)
    {
        Pos=1,Neg=-1;
        for(int j=1;j<=col;j++)
        {
            if(i%2==0)
            {
                printf("%d\t",Neg);
                Neg--;
            }
            else
            {
                printf(" %d\t",Pos);
                Pos++;
            }
            
            
        }
        printf("\n");
    }
}

///////////////////////////
void Pattern5(int row,int col)
{
    int counter=0;
    for(int i=1;i<=row;i++)
    {
        counter=i;
        for(int j=1;j<=col;j++)
        {
            printf("%d\t",counter);
            counter++;
        }
        printf("\n");
    }
}