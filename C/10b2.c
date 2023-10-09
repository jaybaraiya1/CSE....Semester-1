#include<stdio.h>
void main(){
	int i=1,n,sum=0;
	printf("enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
		sum=sum+1;
		}
		i++;
	}
	if(sum==2)
	{
		printf("prime");
		
	}
	else
	{
		printf("not prime");
	}
}
