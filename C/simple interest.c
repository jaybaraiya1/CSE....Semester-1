#include<stdio.h>
void main(){
	//simple interest
	double p,r,l,n;
	printf("enter value of p & r & n: ");
	scanf("%lf %lf %lf",&p ,&r ,&n);
	l=((p*r*n)*0.01);
	printf("simple interest=%lf",l);
}

