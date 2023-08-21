#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter value of a,b&c" );
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("large=a");
		}
		else
		{
			printf("large=c");
		}
		
	}
	else
	{ if(b>c)
	{
		printf("large=b");
	}
	else
	{
		printf("large=c");
	}
	}
}
