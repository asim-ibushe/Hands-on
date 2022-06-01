#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define ErrMemory -2
#define Errsize -3
#define True 1
#define False 0
BOOL present_not(int *arr,int,int);
int firstOccurance(int arr[],int size,int iNo);
int lastOccurance(int *arr,int size,int iNo);
void Range(int *arr,int size,int iStart,int iEnd);
int Product(int *arr,int size);
