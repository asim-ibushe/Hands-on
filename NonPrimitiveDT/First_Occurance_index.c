/*
    Accept N numbers from user and one number, return first occurance of that number */
/*
 
Test Cases:
Input :
N : 8
Array :         12     46    -56      45       45       85      45      96
Number :      45
Output :        3
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      55      55
 Number :      55
 Output :        3
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      58
 Output :        -1
 
 */
#include"Header.h"
int main()
{
int size=0,*ptr=NULL,num=0,iRet=0;
printf("Enter total array elements:\n");
scanf("%d",&size);
ptr=(int *) malloc(sizeof(int)*size);
printf("Enter array elements:\n");
for(int i=0;i<size;i++)
{
scanf("%d",&ptr[i]);
}
printf("Enter any Number,we will return it's first Occurance Index:\n");
scanf("%d",&num);
iRet=First_Occurance(ptr,size,num);
if(iRet==-2)
{
printf("Error,Something wrong (i/p array size or allocated memory)\n");
}
else if(iRet==-1)
{
printf("Number Not found throughout array\n")
}
else
{
printf("Yupp,Number %d found at Index %d .\n",num,iRet);
}
free(ptr);
return 0;
}
