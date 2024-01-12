import java.util.Scanner;
public class Labe3_3{
    public static void main(String[] args){
        System.out.println("enter number");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        if(a>b && a>c){
               System.out.println("max a");
         }
        
        else{
            if(b>c){
            System.out.println("max b");
        }
        else
        {
            System.out.println("max c");
        }
        }
    }
}