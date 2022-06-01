#include"Header.h"

int main()
{
    int iValue=0;
    printf("Enter number of elements: ");
    scanf("%d",&iValue);
    printf("Output:");
    Pattern(iValue);
    //Input : 5 Output : 5 # 4 # 3 # 2 # 1 #
    printf("\n\n---------------------Next_project----------------------\n\n");
    Pattern2(iValue);
    printf("\n\n---------------------Next_project----------------------\n\n");
    Pattern3(iValue);
    printf("\n\n---------------------Next_project----------------------\n\n");
    Pattern4(iValue);    
    printf("\n\n---------------------Next_project----------------------\n\n");
    Table2(iValue);
    return 0;
}