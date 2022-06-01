#include<stdio.h>
//accept range from user and display all numbers in between
void DisplayRange(int start,int end)
{
    for(int i=start;i<=end;i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
}
int main()
{
    int start,end;
    printf("Enter Start point and end point:");
    scanf("%d%d",&start,&end);
    DisplayRange(start,end);
    return 0;
}