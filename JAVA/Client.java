import java.lang.*;
import java.util.*;

class Arithmetic
{
int Add(int no1,int no2)
{
return no1+no2;
}
}

class Client
{
public static void main(String arg[])
{
int num1=0,num2=0,ret=0;
Scanner obj=new Scanner(System.in);

System.out.println("Enter first number:");
num1=obj.nextInt();
System.out.println("Enter second number:");
num2=obj.nextInt();

Arithmetic A=new Arithmetic();
ret=A.Add(num1,num2);
System.out.println("Addition is: "+ret);
}
}
