#include"Header.h"
int Difference(int Arr[], int iLength)
{
    if(Arr==NULL || iLength==0)
    {
        printf("Invalid parameter..\n");
        return -1;
    }
    int E_sum=0,O_sum=0;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            E_sum+=Arr[i];
        }
        else
        {
            O_sum+=Arr[i];
        }
    }
    return E_sum-O_sum;
}

////////////////
void DisplayDiv5(int *Arr,int count)
{
    if(Arr==NULL || count==0)
    {
        printf("Invalid parameter..\n");
        return;
    }
    printf("Output:\n");
    for(int i=0;i<count;i++)
    {
        if(Arr[i]%5==0)
        {
            printf("%d\t",Arr[i]);
        }
    }
    printf("\n");
}

///////////////////////////

void DisplayDiv5_Even(int *Arr,int count)
{
    if(Arr==NULL || count==0)
    {
        printf("Invalid parameter..\n");
        return;
    }
    printf("Output:\n");
    for(int i=0;i<count;i++)
    {
        if(Arr[i]%5==0 && Arr[i]%2==0)
        {
            printf("%d\t",Arr[i]);
        }
    }
    printf("\n");
}

//////////////////
void DisplayDiv3_Div5(int *arr,int count)
{
    if(arr==NULL || count==0)
    {
        printf("Invalid Input!!,Error\n");
    }
    printf("Output:\n");
    for(int i=0;i<count;i++)
    {
        if(arr[i]%3==0 && arr[i]%5==0)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");
}
/////////////
void DisplayDiv11(int *Arr,int count)
{
    if(Arr==NULL || count==0)
    {
        printf("Invalid parameter..\n");
        return;
    }
    printf("Output:\n");
    for(int i=0;i<count;i++)
    {
        if(Arr[i]%11==0)
        {
            printf("%d\t",Arr[i]);
        }
    }
    printf("\n");
}