#include<stdio.h>
void main(){
	int nu;
	printf("Enter number");
	scanf("%d",&nu);
	nu=nu%10;
	if(nu%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
