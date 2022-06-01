#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
void fibo(int no)
{
int n1=0,n2=1,n3=0;
printf("Output:\t");
for(int i=0;i<no;i++)
{
printf("%d\t",n1);
n3=n1+n2;
n1=n2;
n2=n3;
}
printf("\n");
}

void fiboR(int no)
{
static int n1=0,n2=1,n3=0;
if(no>0)
{
printf("%d\t",n1);
n3=n1+n2;
n1=n2;
n2=n3;
fiboR(no-1);
}
}

int checkPrime(int no)
{
int flag=1;
for(int i=2;i<=(no/2);i++)
{
if((no%i)==0)
{
flag=0;
break;
}
}
if(flag==1)
{
return 1;
}
else
{
return 0;
}
}

bool palindrome(int num)
{
int temp=num,rem=0,rev=0;
while(num!=0)
{
rem=num%10;
rev=(rev*10)+rem;
num=num/10;
}
if(temp==rev)
{
return true;
}
else
{
return false;
}
}

int count(int no)
{
int icnt=0;
while(no!=0)
{
no=no/10;
icnt++;
}
return icnt;
}

bool armstrong(int num)
{
int power=count(num);
int Mult=1,temp=num,rem=0,sum=0;

while(num!=0)
{
rem=num%10;
Mult=1;
for(int i=1;i<=power;i++)
{
Mult=Mult*rem;
}
sum=sum+Mult;
if(sum>temp)
{
break;
}
num=num/10;
}
if(sum==temp)
{
return true;
}
else
{
return false;
}
}

int FactorialR(int num)
{
static int fact=1;
if(num>0)
{
fact=fact*num;
FactorialR(num-1);
}
return fact;
}

int perfectNum(int num)
{
int sum=0;
for(int i=1;i<=(num/2);i++)
{
if((num%i)==0)
{
sum+=i;
}
if(sum>num)
{
break;
}
}
if(sum==num)
{
return true;
}
else
{
return false;
}
}

void reverseArr(int *arr,int count)
{
int temp=0;
for(int i=0,j=count-1;i<j;i++,j--)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}

void leftrotatebyone(int *arr,int n)
{
int temp=arr[0];
for(int i=0;i<n;i++)
{
arr[i]=arr[i+1];
}
arr[n-1]=temp;
}
void rotateArrL(int *arr,int count,int k)
{
for(int j=0;j<k;j++)
{
leftrotatebyone(arr,count);
}
}

void swapAlterArray(int *arr,int n)
{
int temp=0;
for(int i=0;i<n;i+=2)
{
if((i+1)<n)
{
temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
}
}
}

int findUnique(int *arr,int n)
{
int ans=0;
for(int i=0;i<n;i++)
{
ans=ans^arr[i];
}
return ans;
}

void findIntersection(int *arr1,int n,int *arr2,int m)
{
/*for(int i=0;i<n;i++)
{
int element=arr1[i];
for(int j=0;j<m;j++)
{
if(element>arr2[j])
{
break;
}
if(element==arr2[j])
{
printf("%d\t",element);
arr2[j]==-1;
break;
}
}
}
*/
int i=0,j=0;
while(i<n && j<m)
{
if(arr1[i]==arr2[j])
{
printf("%d\t",arr1[i]);
i++;
j++;
}
if(arr1[i]>arr2[j])
{
i++;
}
if(arr1[i]>arr2[j])
{
j++;
}
}
}

int main()
{
//fiboR(8);
/*
int num=0;
printf("Enter any number:");
scanf("%d",&num);
//printf("Factorial=%d",FactorialR(num));

if(perfectNum(num))
{
printf("It's Perfect Number\n");
}
else
{
printf("Number is NOT\n");
}
*/

int *ptr=NULL,*ptr1=NULL,count1=0,count2=0;
printf("Enter number of students in classA:");
scanf("%d",&count1);
printf("Enter number of students in classB:");
scanf("%d",&count2);
ptr=(int *) malloc(sizeof(int)*count1);
ptr1=(int *) malloc(sizeof(int)*count2);
printf("Enter roll call of students A:");
for(int i=0;i<count1;i++)
{
scanf("%d",&ptr[i]);
}
printf("Enter roll call of students B:");
for(int i=0;i<count2;i++)
{
scanf("%d",&ptr1[i]);
}

findIntersection(ptr,count1,ptr1,count2);
//printf("Enter count of K element to rotate:");
//scanf("%d",&k);
//printf("Unique Number is:%d",findUnique(ptr,count));
/*
printf("Output:");
for(int i=0;i<count;i++)
{
printf("%d\t",ptr[i]);
}
printf("\n");

reverseArr(ptr,count);
printf("Array after reverse:");
for(int i=0;i<count;i++)
{
printf("%d\t",ptr[i]);
}
*/
return 0;
}
