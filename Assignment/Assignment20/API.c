#include"Mylib.h"
/*
1. Design application for hotel. According to the management
team of hotel they are giving discount on total bill amount of
customer.
If bill amount is less than 500 then there is no discount , if
bill amount is less than 1500 and more than 500 they give 10%
discount.
And if the bill amount is more than 1500 then they give 15%
discount.
*/
float CalculateBill(int iAmount)
{
    if(iAmount<500)
    {
        return iAmount;
    }
    else if(iAmount>=500 && iAmount<1500)
    {
        return iAmount-((10*iAmount)/100);
    }
    else
    {
        return iAmount-((15*iAmount)/100);
    }
}

///////////////////
/*2. Design application for income tax department to calculate tax
amount. According to the income tax department there is no
income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20%
tax.
And for more than 20 lakhs there will be 30% tax.
*/
float IncomeTax(int iAmount)
{
    int TaxSum=0,temp=iAmount;
    if(iAmount<500000)
    {
        return 0;
    }
    if(iAmount>=500000 && iAmount<1000000)
    {
        temp=iAmount-500000;
        printf("%d",temp);
        TaxSum+=temp-((10*temp)/100);
        printf("%d",TaxSum);
    }
    if(iAmount>=1000000 && iAmount<2000000)
    {
        temp=iAmount-1000000;
        TaxSum+=temp-((20*temp)/100);
    }    
    if(iAmount>=2000000)
    {
        temp=iAmount-2000000;
        TaxSum+=temp-((30*temp)/100);
    }
    return TaxSum;
}
////////////////
/*
. Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for
third standard 21000 and for fourth standard fees are 23450.
*/
int CalculateFee(int std)
{
    if(std>4)
    {
        return -1;
    }
    if(std==1)
    {
        return 8900;
    }
    else if(std==2)
    {
        return 12790;
    }
    else if(std==3)
    {
        return 21000;
    }
    else
    {
        return 23450;
    }
}
/////////////////////
/*
4. We have to design application for tourist company.
Tourist company provides cars on rent.
Depends on the running of car they apply rent.
If running is less than 100 kilometres then they charge 25
rupees per kilometre .
And if running is more than 100 kilometres then they apply 15
rupees per kilometre after 100 kilometres.
*/
int TouristBill(int iKilometer)
{
    if(iKilometer<0)
    {
        iKilometer=-iKilometer;
        printf("Invalid input,Assumed %d KM \n",iKilometer);
    }
    if(iKilometer<=100)
    {
        return iKilometer*25;
    }
    else
    {
        return iKilometer*15;
    }
}