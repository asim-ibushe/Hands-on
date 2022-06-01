#include"Header.h"
int main()
{
    int *ptr=NULL,size=0;
    int num=0;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    ptr=(int *) malloc(sizeof(int)*size);
    if(ptr==NULL)
    {
        printf("Unable to allocate Memory\n");
        return ErrMemory;
    }
    if(size>0)
    {
            printf("Enter elements in array:\n");
    for(int i=0;i<size;i++)
    {
        printf("Insert %d Element:\n",i+1);
        scanf("%d",&ptr[i]);
    }

    int choice=0;
    printf("Choose Operation to be performed on array elements:\n1.Frequency of Even\n2.Difference betn EvenOdd Frequency count\n3.check 11 Number present or Not\n4.count of Occurance of Digit 11 in array\n5.Accept a number from user and Display it's count\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("Number of Even count Throughout:%d\n",countEven_Frequency(ptr,size));
            break;
        case 2:
        printf("Difference betn EvenOdd Frequency count:%d\n",diffEvenOdd_Frequency(ptr,size));
            break;
        case 3:
            if(Check_11(ptr,size)==True)
            {
                printf("Eleven Found\n");
            }
            else
            {
                printf("Eleven Not Found\n");
            }
            break;

        case 4:
        printf("Occurance of Number 11 in Array:%d\n",countFrequency_11(ptr,size));
            break;

        case 5:
            printf("Enter any Integer Number:\n");
            scanf("%d",&num);
            printf("Count of %d in Array is:%d\n",num,Frequency(ptr,size,num));
            break;
    }
    }
    else
    {
        printf("U need to have array size greater than 0,Atleast one element.Try next time\n");
    }
    free(ptr);
    return 0;
}