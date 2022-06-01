#include"Header.h"
int main()
{
    int iValue=0;
    printf("Enter any Number: \n");
    scanf("%d",&iValue);
    Display(iValue);
    printf("-----------------------------------------------------------------------------------\n");
    int Money=0;
    printf("Enter number of money in USD:\n");
    scanf("%d",&Money);
    printf("Value in INR is: %d\n",DollarToInr(Money));
    printf("-----------------------------------------------------------------------------------\n");
    int FactNum=0;
    printf("Enter any number to find Even Factorial:");
    scanf("%d",&FactNum);
    printf("Output Even:%d\n",EvenFactorial(FactNum));
    printf("-----------------------------------------------------------------------------------\n");
    printf("Output Odd:%d\n",OddFactorial(FactNum));
    printf("-----------------------------------------------------------------------------------\n");
    printf("Difference between Even and Odd Fact is: %d\n",DifferenceFact(FactNum));
    return 0;
}