#include<stdio.h>
void main(){
	int b,n,j,a=0;
	printf("enter number");
	scanf("%d",&n);
	b=n;
	while(n!=0)
	{
		j=n%10;
		n=n/10;
	a=j+(a*10);
	}
	
	if(a==b)
	{
		printf("palindrome");
	}
	else	{
		printf("not palindrome");
	}
}

