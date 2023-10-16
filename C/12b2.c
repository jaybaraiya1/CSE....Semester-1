#include<stdio.h>
void main (){
	
	float  e=1.0,i,j,n,mu=1;
	printf("enter number");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{   mu=1;
		for(j=1;j<=i;j++)
		{
		mu=mu*j;
		}
		e=e+(1/mu);
	}
	printf("%f",e);}
