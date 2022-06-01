/*
    Accept N numbers from user and diplsay addition of digits of each number separately
 */
#include"Header.h"
int main()
{
    int *ptr = NULL;
    int iValue = 0;
    int iCnt = 0;
    
    printf("Enter the number of elemnts\n");
    scanf("%d",&iValue);
    
    if(iValue == 0)
    {
        return -1;
    }
    
    ptr = (int *)malloc(sizeof(int) * iValue);
    if(ptr == NULL)
    {
        return -1;
    }

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
SumDigits(ptr,iValue);
free(ptr);
}
