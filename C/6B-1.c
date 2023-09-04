#include<stdio.h>
void main(){
	double a,b,c;
	printf("enter unit");
	scanf("%lf",&a);
	if(a<=50)
	{
		b=a*0.50;
	}
	else if(a<=150)
	{
		b=((a-50)*0.75)+(50*0.50);
	}
	else if( a<=250)
	{
		b=((a-150)*1.20)+(50*0.50) +(100*0.75);
	}
	else
	{
		b=((a-250)*1.50)+(50*0.50)+(100*0.75)+(100*1.20);
	}
	c=b/5;
	b=c+b;
	printf(" total electricity bill=%lf",b);
	
	
}
