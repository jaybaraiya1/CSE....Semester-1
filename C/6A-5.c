#include<stdio.h>
void main(){
	double a,b,c,d,e,f;
	printf("enter marks of all subject");
	scanf("%lf %lf %lf %Lf %lf",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	if(f<=35)
	{
		printf("fail");
	}
	else if(f>35 && f<=45)
	{
		printf("pass class");
	}
	else if(f>45 && f<=60)
	{
		printf("second class");
	}
	else if(f>60 && f<=70)
	{
		printf("first class");
	}
	else
	{
		printf(" Distinction");
	}
}
