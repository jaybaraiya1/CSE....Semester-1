#include<stdio.h>
void main(){
	int s1,s2,s3,ms;
	printf("enter value of side:");
	scanf("%d %d %d",&s1,&s2,&s3);
	if(s1==s2 && s2==s3 )
	{
		printf("equilateral");
	}
	else if(s1==s2 || s2==s3 || s3==s1)
	{
		printf("isosceles");
	}
	else
	{
		printf("sceles");
	}
	ms=s1;
	if(s2>ms)
	{
		ms=s2;
	}
	else if(s3>ms)
	{
		ms=s3;
	}
	if(ms*ms==(s1*s1)+(s2*s2) || ms*ms==(s2*s2)+(s3*s3) ||ms*ms==(s3*s3)+(s1*s1))
	{
		printf("\nright ");
	}
	else
	{
		printf("\n not right");
	}
}
