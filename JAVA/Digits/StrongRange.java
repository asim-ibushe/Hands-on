import java.io.*;
import java.util.*;

class Server
{
void checkStrongRange(int iStart,int iEnd)
{
if(iStart>iEnd)
{
return;
}
if(iStart<0 || iEnd<0)
{
return;
}
int Fact[]={1,1,2,6,24,120,720,5040,40320,362880};
int isum=0,iNo=iStart;
for(int i=iStart;i<=iEnd;i++)
{
iNo=i;
while(iNo!=0)
{
isum=isum+Fact[iNo%10];
iNo=iNo/10;
}
if(isum==i)
{
System.out.println(i);
}
isum=0;
}
}
}

class StrongRange
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println(" ");
System.out.print("Enter Start Number:");
int start=sc.nextInt();
System.out.print("Enter End Number:");
int end=sc.nextInt();
System.out.println("All Strong Number between "+ start +" & "+end);
Server obj=new Server();
obj.checkStrongRange(start,end);
}
}
