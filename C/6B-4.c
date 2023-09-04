#include<stdio.h>
void main(){
	int a,b,c,sm;
	printf("enter a b c: ");
	scanf("%d %d %d",&a,&b,&c);
	
	 if(a>b && a<c)
    {
    	printf("a=%d",a);
	}	
	 else if(b>a && b<c)
	{
		printf("b=%d",b);
	}	
	else
	{
		printf("c=%d",c);
	}
}
