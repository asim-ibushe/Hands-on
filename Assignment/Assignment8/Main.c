#include<stdio.h>
//Write a program which accept number from user and if number is less than 50
//then print small , if it is greater than 50 and less than 100 then print medium, if it is
//greater than 100 then print large
int compare(int ino)
{
    if(ino<50)
    {
        return -1;
    }
    else if(ino>100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Display(int ino)
{
    if(ino/10!=0)
    printf("Invalid Number");

    if(ino<0)
    ino=-ino;

    if(ino==1)
    {
        printf("One");
    }else if(ino==2)
    {
        printf("Two");
    }
    else if(ino==3)
    {
        printf("Three");
    }
    else if(ino==4)
    {
        printf("Four");
    }
    else if(ino==5)
    {
        printf("Five");
    }
    else if(ino==6)
    {
        printf("Six");
    }
    else if(ino==7)
    {
        printf("Seven");
    }
    else if(ino==8)
    {
        printf("Eight");
    }
    else if(ino==9)
    {
        printf("Nine");
    }else
    {
        printf("Zero");
    }
}

int Factorial(int ino)
{
    if(ino<0)
    ino=-ino;
    int fact=1;
    if(ino==0)
    return fact;

    while(ino>=1)
    {
        fact=fact*ino;
        ino=ino-1;
    }
    return fact;
}

void Table(int ino)
{
    if(ino<0)
    ino=-ino;

    int Inc=ino;
    printf("Table of %d\t:",ino);
    for(int i=ino;i<=ino*10;i+=Inc)
    {
        printf("%d\t",i);
    }
    printf("\n");
}

void Tablerev(int ino)
{
    if(ino<0)
    ino=-ino;
    
    int Inc=ino;
    printf("Table of %d in reverse order\t:",ino);
    for(int i=ino*10;i>=ino;i-=Inc)
    {
        printf("%d\t",i);
    }
    printf("\n");
}


int main()
{
    int number=0,iRet=0;
    printf("Enter any number\n");
    scanf("%d",&number);
    iRet=compare(number);
    if(iRet==0)
    {
        printf("medium\n");
    }
    else if(iRet==1)
    {
        printf("large\n");
    }
    else
    {
        printf("small\n");
    }

    Display(number);
    printf("\nFactorial of given Number is:%d\n",Factorial(number));
    Table(number);
    Tablerev(number);
    return 0;
}