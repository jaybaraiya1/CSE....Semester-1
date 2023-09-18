#include<stdio.h>
void main(){
	int a,b,c,la;
	printf("enter a b c");
	scanf("%d %d %d",&a,&b,&c);
	 la=(a>b)? (a>c)? a : c :(b>c)? b : c;
	printf("largest=%d",la);
}
