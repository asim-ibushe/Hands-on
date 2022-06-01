#include"Header.h"
BOOL present_not(int arr[],int size,int iNo)
{
    if(arr==NULL)
    {
        return ErrMemory;
    }
    if(size==0)
    {
        return Errsize;
    }
    int i=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==iNo)
        {
            break;
        }
    }
    if(arr[i]==iNo)
    {
        return True;
    }
    else
    {
        return False;
    }   
}
////////////
int firstOccurance(int arr[],int size,int iNo)
{
    if(arr==NULL)
    {
        return ErrMemory;
    }
    if(size==0)
    {
        return Errsize;
    }
    int i=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==iNo)
        {
            break;
        }
    }
    if(arr[i]==iNo)
    {
        return i;
    }
    else
    {
        return -1;
    }
    
}
///////////////////// 

int lastOccurance(int *arr,int size,int iNo)
{
    if(arr==NULL)
    {
        return ErrMemory;
    }
    if(size==0)
    {
        return Errsize;
    }
    int i=0;
    for(i=size-1;i>=0;i--)
    {
        if(arr[i]==iNo)
        {
            break;
        }
    }
    if(arr[i]==iNo)
    {
        return i;
    }
    else
    {
        return -1;
    }   
}
///////////////

void Range(int *arr,int size,int iStart,int iEnd)
{
    if(arr==NULL)
    {
        printf("Memory Not allocated\n");
        return;
    }
    if(size==0)
    {
        printf("Invalid array size");
        return;
    }
    int i=0;
    while(i<size)
    {
        if(arr[i]>=iStart && arr[i]<=iEnd)
        {
            printf("%d\t",arr[i]);
        }
        i++;
    }
    printf("\n");
}
///////////////
int Product(int *arr,int size)
{
    if(arr==NULL)
    {
        return ErrMemory;
    }
    if(size==0)
    {
        return Errsize;
    }
    int iProduct=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==1)
        {
            iProduct=1;
            iProduct*=arr[i];
        }
    }
    return iProduct;
}