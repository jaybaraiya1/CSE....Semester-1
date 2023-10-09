#include<stdio.h>
void main(){
	int i=1,n,sum=0;
	printf("enter number");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
		printf("%d\n",i);
		sum=sum+i;}
		i++;
	}
	if(sum==n)
	{
		printf("perfect");
	}
	else
	{
		printf("not perfect");
	}
	
}
