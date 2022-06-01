#include"Header.h"
void Display(int num)
{
    if(num<0)
    {
        num=-num;
    }
    for(int i=1;i<=num;i++)
    {
        printf("*\t");
    }
    for(int i=1;i<=num;i++)
    {
        printf("#\t");
    }
    printf("\n");
}

int DollarToInr(int money)
{
    return money*70;
}

int EvenFactorial(int value)
{
    if(value==0)
    return 1;
    if(value<0)
    {
        value=-value;
    }
    int Fact=1;
    for(int i=1;i<=value;i++)
    {
        if(i%2==0)
        {
            Fact*=i;
        }
    }
    return Fact;
}
int OddFactorial(int value)
{
    if(value==0)
    return 1;
    if(value<0)
    {
        value=-value;
    }
    int Fact=1;
    for(int i=1;i<=value;i++)
    {
        if(i%2==1)
        {
            Fact*=i;
        }
    }
    return Fact;
}

int DifferenceFact(int num)
{
    return EvenFactorial(num)-OddFactorial(num);
}