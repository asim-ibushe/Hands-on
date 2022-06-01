#include"Header.h"
//Accept N numbers from user and return frequency of even numbers
int countEven_Frequency(int arr[],int size)
{
    if(arr==NULL)
    {
        return ErrMemory;
    }
    if(size==0)
    {
        return Errsize;
    }
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    return count;
}
/////////////////////
//Accept N numbers from user and return difference between frequency of even number and odd numbers.
int diffEvenOdd_Frequency(int arr[],int size)
{
    if(arr==NULL)
    {
        return ErrMemory;
    }
    if(size==0)
    {
        return Errsize;
    }
    int Ecount=0,Ocount=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            Ecount++;
        }
        else
        {
            Ocount++;
        }
        
    }
    return Ecount-Ocount;
}
////////////////////
//Accept N numbers from user check whether that numbers contains 11 in it or not.
BOOL Check_11(int arr[],int size)
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
        if(arr[i]==11)
        {
            break;
        }
    }
    if(arr[i]==11)
    {
        return True;
    }
    else
    {
        return False;
    }
}
////////////////
//Accept N numbers from user and return frequency of 11 form it.
int countFrequency_11(int arr[],int size)
{
    if(arr==NULL)
    {
        return ErrMemory;
    }
    if(size==0)
    {
        return Errsize;
    }
    int count=0,i=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==11)
        {
            count++;
        }
    }
    return count;
}
///////////////
//Accept N numbers from user and accept one another number as NO ,return frequency of NO form it.
int Frequency(int arr[],int size,int iNo)
{
    if(arr==NULL)
    {
        return ErrMemory;
    }
    if(size==0)
    {
        return Errsize;
    }
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==iNo)
        {
            count++;
        }
    }
    return count;
}
