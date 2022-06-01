#include"Header.h"
int main()
{
int number=0;
printf("--Assignment 7--\n");
printf("Enter any number:\n");
scanf("%d",&number);
printf("No of even digits in the number are:%d \n",count_even(number));
printf("No of odd digits in the number are:%d \n",count_odd(number));
printf("No of digits in between range 3 to 7 are:%d \n",count_Range3to7(number));
printf("No of digits Multiplication is:%d \n",digi_Mul(number));
printf("Diff between sum of All even digi and odd digi:%d \n",diff_EvenOddSummation(number));
    int iValue1 = 0, iValue2 = 0, iValue3 =0;
    int iRet = 0;
    
    printf("Enter first number : \n");
    scanf("%d",&iValue1);
    
    printf("Enter Second number : \n");
    scanf("%d",&iValue2);
    
    printf("Enter third number : \n");
    scanf("%d",&iValue3);
    
    iRet = Multiplication(iValue1, iValue2, iValue3);
    
    printf("Multiplication is : %d\n",iRet);
return 0;
}
