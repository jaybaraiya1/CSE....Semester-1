#include<stdio.h>
void main(){
	int a,b,c,n,i;
	printf("enternumber of series");
	scanf("%d",&n);
	printf("enter series first a b");
	scanf("%d%d",&a,&b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
