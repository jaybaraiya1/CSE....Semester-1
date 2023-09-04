#include<stdio.h>
#include<math.h>
void main(){

   double b,c,a,d,root1,root2,r,i;
   printf("enter abc");
   scanf("%lf %lf %lf",&a,&b,&c);
  d=b*b-4*a*c;
  if(d>0)
  {
  	root1=((-b+sqrt(d))/(2*a));
  	root2=((b+sqrt(d))/(2*a));
    printf("root1 root2 %lf %lf",root1,root2);
  }
  else if (d==0)
  {
  	root1=root2=-b/(2*a);
  	printf("root %lf %lf",root1,root2);
  }
  else
  {
  	r=-b/(2*a);
  	i=sqrt(-d)/(2*a);
    printf("imaginary");
  }
}
