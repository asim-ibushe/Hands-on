#include<stdio.h>
void Pattern(int ino)
{
    if(ino<0)
    ino=-ino;

    printf("Output:\t");
    for(int i=0;i<ino;i++)
    {
        printf("%s","$\t*\t");
    }
}
void Display(int ino)
{
    printf("\nOutput :");
    for(int i=1;i<=ino;i++)
    {
        printf("%d\t",i);
    }

}
void Display_numLine(int ino)
{
    printf("\nOutput :");
    for(int i=-ino;i<=ino;i++)
    {
        printf("%d\t",i);
    }

}
void OddDisplay(int ino)
{
    printf("\n Output :");
    for(int i=1;i<=ino;i+=2)
    {
        printf("%d\t",i);
    }
}
void MultipleDisplay(int ino)
{
    printf("\nOutput:");
    for(int i=ino;i<=ino*5;i+=ino)
    {
        printf("\t%d",i);
    }printf("\n");
}
int main()
{
    int number;
    printf("Enter any Number:");
    scanf("%d",&number);
    Pattern(number);
    Display(number);
    Display_numLine(number);
    OddDisplay(number);
    MultipleDisplay(number);
    return 0;
}