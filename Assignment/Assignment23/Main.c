#include"Header.h"
int main()
{
    int count=0,*ptr=NULL;
    int num=0,iRet=0;
    printf("Enter count of Elements:\n");
    scanf("%d",&count);
    ptr=(int *) malloc(sizeof(int)*count);//dynamic memory allocation
    if(ptr==NULL)
    {
        printf("Error,Memory Full..Space Not allocated\n");
    }
    if(count>0)
    {
        printf("Enter array Elements:\n");
        for(int i=0;i<count;i++)
        {
            printf("Enter %d element:\n",i+1);
            scanf("%d",&ptr[i]);
        }
        //printf("Enter any Integer:\n");
        //scanf("%d",&num);
        /*//Problem:1
        if(present_not(ptr,count,num)==True)
        {
            printf("Element Found!!\n");
        }
        else
        {
            printf("Element [ NOT ] Found\n");
        }*/
        iRet=Product(ptr,count);
        if (iRet==-1)
        {
            printf("Element Not Found..\n");
        }
        else
        {
        //Problem:2
        //printf("First Occured index of Number Found is:%d\n",1+iRet);
        //Problem:3
        //printf("Last Occured index of Number Found is:%d\n",1+iRet);
        /*//Problem:4
        int start=0,end=0;
        printf("Enter start & end Range point:\n");
        scanf("%d%d",&start,&end);
        printf("Output: Numbers between Range(%d,%d):\n",start,end);
        Range(ptr,count,start,end);
        */
       //Problem:5
       printf("Product of all odd elements in an array:%d\n",iRet);
        }
    }
    else
    {
        printf("Please Enter atleast one element in array!!\n");
    }
    return 0;
}