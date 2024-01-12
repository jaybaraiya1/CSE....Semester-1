import java.util.Scanner;
public class Labe3_1{
    public static void main(String[] args){
    System.out.println("enter marks");
      Scanner sc=new Scanner(System.in);
      float sum;
      float a=sc.nextInt();
      float b=sc.nextInt();
      float c=sc.nextInt();
      float d=sc.nextInt();
      float e=sc.nextInt();
      System.out.println(sum=((a+b+c+d+e)/5.0f));
      if(sum>=60){
        System.out.println("first");
      }
      else if(sum>=50){
        System.out.println("second");
      }
      else if(sum>=40){
        System.out.println("third");
      }
      else{
        System.out.println("fail");
      }

     
      

    }
}