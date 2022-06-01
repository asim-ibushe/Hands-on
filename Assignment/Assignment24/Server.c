#include"Header.h"
int main()
{
int size=0,*ptr=NULL,iRet=0,choice=0;
printf("Enter Number of Elements in array:\n");
scanf("%d",&size);
ptr=(int *) malloc(sizeof(int)*size);//dynamic memory allocation
if(ptr==NULL)
{
printf("No space available in RAM,Error..\n");
return -1;
}
if(size>0)
{
printf("Enter array elements:\n");
for(int i=0;i<size;i++)
{
printf("Enter %d Number :",i+1);
scanf("%d",&ptr[i]);
}

do
{
    printf("\nChoose Operation to be performed on array elements:\n\n1.Largest Element\n2.Smallest Element\n3.Difference between Largest & Smallest\n4.All element with 3Digits\n5.Sum of Digits of Each\n6.Exit\n=");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
		iRet=largestFromSeq(ptr,size);
		if(iRet==ErrMemory)
		{
		printf("Memory Not Allocated!!\n");
		}
		else if(iRet==ErrSize)
		{
		printf("Invalid Array size.\n");
		}
		else
		{
			printf("Largest Throughout:%d\n",iRet);
		}
                break;
        case 2:
		iRet=smallestFromSeq(ptr,size);
		if(iRet==ErrMemory)
		{
		printf("Memory Not Allocated!!\n");
		}
		else if(iRet==ErrSize)
		{
		printf("Invalid Array size.\n");
		}
		else
		{
		printf("Smallest Throughout:%d\n",iRet);
		}
		break;
        case 3:
		iRet=diffLargestSmallest(ptr,size);
		if(iRet==ErrMemory)
		{
		printf("Memory Not Allocated!!\n");
		}
		else if(iRet==ErrSize)
		{
		printf("Invalid Array size.\n");
		}
		else
		{
		printf("Difference Between Largest & Smallest :%d\n",iRet);
		}
                break;

        case 4:displayNum_3Digi(ptr,size);
                break;

        case 5:displayElement_Digisum(ptr,size);
                break;
    }
}
while(choice!=6);
}
else
{
printf("Please enter atleast one element in array\n");
}
free(ptr);
return 0;
}
