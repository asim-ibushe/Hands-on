
#include"Mylib.h"
int main()
{
    int choice=0;
    int Bill=0,income=0,standard=0,km=0;
    float fRet=0;
    printf("Enter your choice..\n1.Restaurant Bill\n2.Income Tax\n3.School Management System\n4.Tourist Company\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter Total Bill:\n");
        scanf("%d",&Bill);
        fRet=CalculateBill(Bill);
        printf("Total Discount Rate:%.2f \n",fRet);
        printf("Total Amount Saved:%.2f \n",Bill-fRet);
        break;
    case 2:
        printf("Enter Gross Annual Income:\n");
        scanf("%d",&income);
        fRet=IncomeTax(income);
        if(fRet==0)
        {
            printf("You are the most happy person,No income Tax charges Applied\n");
        }    
        else
        {
            printf("Income Tax charges:%.3f\n",fRet);
        }
        break;
    case 3:
        printf("welcome to primary school\n");
        printf("In which standard your child is:\n");
        scanf("%d",&standard);
        if(fRet==-1)
        {
            printf("Primary School!!,Please enter valid student class\n");
        }
        else
        {
            printf("Fees Detail:%d\n",CalculateFee(standard));
            
        }
        break;
    case 4:
        printf("Tourist Company\n");
        printf("Enter Travelling Distance (KM):\n");
        scanf("%d",&km);
        printf("Estimated Cost:%d\n",TouristBill(km));
        break;
    default:
        printf("End of Application..\n");
        break;
    }

    return 0;
}