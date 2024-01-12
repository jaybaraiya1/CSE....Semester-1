import java.util.Scanner;
public class Labe3_2{
    public static void main(String[] args){
 Scanner sc=new Scanner(System.in);
     int sum=0;
    int n=sc.nextInt();
    for(int i=1;i<=n;i++)
    {
       if(n%i==0)
       {
        sum=sum+1;
       }
    
    }
    if(sum<=2)
    {
    System.out.println("prime");
    }
    else{
     System.out.println("not prime");
    }
    }
    
}