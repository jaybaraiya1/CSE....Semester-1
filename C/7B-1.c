#include<stdio.h>
void main(){
	int a,b,c,la;
	printf("enter a b c");
	scanf("%d %d %d",&a,&b,&c);
	la= a>b? 1:2;
	switch(la)
	{
	case 1:
	printf("value=%d",a*c);
	break;
	case 2:
	printf("value=%d",b*c);
	 break;
	}
}
