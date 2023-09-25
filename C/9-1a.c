#include<stdio.h>
void main(){
	int i=1,n,sum=0;
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%2==0)
		{
			sum=-n/2;
		}
		else
		{
			sum=(-(n-1)/2)+n;
			
		}
		i++;
	}
	printf("%d",sum);
}
