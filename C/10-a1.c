#include<stdio.h>
void main(){
	int n,i,id;
	printf("enter the value");
	scanf("%d",&n);
	id=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	printf("%d",id+n);
}
	
