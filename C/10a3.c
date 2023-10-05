#include<stdio.h>
void main(){
	int i=1,n,divi=0;
	printf("enter number");
	scanf("%d",&n);
	while(i<=n)
   	{  
		if(n%i==0)
		{
			divi+=1;
		}
		i++;
	}
	if(divi==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
