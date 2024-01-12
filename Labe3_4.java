import java.util.Scanner;
public class Labe3_4{
    public static void main(String[] args){
        int a,rem=0,sum=0,b;
        System.out.println("enter number");
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        b=a;
        while(a!=0){
            rem=a%10;
            sum=sum*10+rem;
            a=a/10;
        }
        if(sum==b){
            System.out.println("palindrome");
        }
        else{
            System.out.println("not palindrome");
        }
        }
}