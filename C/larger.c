#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter value of a,b&c" );
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c )
	{
		printf("a");
	}
	else
{
	if(b>c)
	{
		printf("b");
	}
	else
	{
		printf("c");
	}
}
}
