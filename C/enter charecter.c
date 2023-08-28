#include<stdio.h>
void main(){
	char a;
	printf("enter charecter");
	scanf("%c",&a);
	if(a>='a'&&a<='z')
	{
		printf("lower");
	}
	 else if(a>='A'&&a<='Z')
	{
		printf("upper");
	}
	else if(a>='0'&&a<='9')
	{
		printf("digit");
	}
	else 
	{
		printf("special charcter");
	}
}
