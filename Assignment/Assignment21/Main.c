#include"Header.h"
int main()
{
    int *ptr=NULL,size=0;
    printf("Enter count of Element in array:\n");
    scanf("%d",&size);
    ptr=(int *) malloc(sizeof(int)*size);
    if(ptr==NULL)
    {
        printf("Error while allocating Memory..\n");
        return -1;
    }
    if(size>0)
    {
        printf("Enter %d array elements:\n",size);
        for(int i=0;i<size;i++)
        {
            scanf("%d",&ptr[i]);
        }
    }
    if(Difference(ptr,size)==-1)
    {
        printf("Error\n");
    }
    else
    {
    int choice=0;
    printf("Choose Operation to be performed on array elemnt:\n1.Difference of EvenSummation & OddSummation\n2.Display numbers divisible by 5\n3.Display numbers divisible by 5 & Also Even\n4.Display elements divisible by 3 & 5\n5.Display array elements multiple of 11\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("Difference is:%d\n",Difference(ptr,size));
            break;
        case 2:
            DisplayDiv5(ptr,size);
            break;

        case 3:
            DisplayDiv5_Even(ptr,size);
            break;

        case 4:
            DisplayDiv3_Div5(ptr,size);
            break;

        case 5:
            DisplayDiv11(ptr,size);
            break;
    }
    }
    free(ptr);
    return 0;
}