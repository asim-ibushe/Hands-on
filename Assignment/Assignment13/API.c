#include"Header.h"
void Pattern(int value)
{
    if (value<0)
    value=-value;
    char i='A';
    while(value!=0)
    {
        printf("%c\t",i);
        i++;
        value--;
    }
    printf("\n");
}

void Pattern2(int value)
{
    while(value!=0)
    {
        printf("%d\t#\t",value);
        value--;
    }
    printf("\n");
}

void Pattern3(int value)
{
    for(int i=1;i<=value;i++)
    {
        printf("%d\t*\t",i);
    }
    printf("\n");
}
void Pattern4(int value)
{
    for(int i=1;i<=value;i++)
    {
        printf("#\t%d\t*\t",i);
    }
    printf("\n");
}

void Table2(int num)
{
    for(int i=1;i<=num;i++)
    {
        printf("%d\t",i*2);
    }
    printf("\n");
}