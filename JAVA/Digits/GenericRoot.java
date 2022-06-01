// Accept number from user and return its generic root.
// Input 789
// Output : 6 		7+8+9	-> 24 -> 2+4	-> 6
// Input : 9948
// Output : 3 		9+9+4+8	->	30	-> 3+0	-> 3
// Input : 8
// Output : 8	-> 8
// Input :	12	
// Output:  3	-> 1 + 2 -> 3
import java.lang.*;
import java.util.*;
class Server
{
int gRoot(int no)
{
if(no<0)
{
no=-no;
}
int sum=no;
while(sum>9)
{
no=sum;
sum=0;
while(no!=0)
{
sum=sum + (no%10);
no=no/10;
}
System.out.println(sum);
}
return sum;
}
}

class GenericRoot
{
public static void main(String args[])
{
Server s=new Server();
Scanner input=new Scanner(System.in);
System.out.println("Enter any number:");
int value=input.nextInt();
int ret=s.gRoot(value);
System.out.println("Generic root is: "+ret);
}
}
