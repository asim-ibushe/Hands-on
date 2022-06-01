/*
problem statement: Accept marks of all students from a classroom and display the difference between marks of highest scored and lowest score of students in the class
*/
#include"Header.h"
int main()
{
int iValue=0,*ptr=NULL;
printf("Enter Total numbers of students in the classroom:");
scanf("%d",&iValue);
if(iValue==0)
{
return -1;
}
ptr=(int *)malloc(sizeof(int)*iValue);
if(ptr==NULL)
{
return -1;
}
printf("Enter the marks of Each student:\n");
for(int i=0;i<iValue;i++)
{
scanf("%d",&ptr[i]);
}
printf("Difference between Highest score and Lowest score of marks in Classroom is:%d\n",FindMax(ptr,iValue)-FindMin(ptr,iValue));
free(ptr);
return 0;
}
