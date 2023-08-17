#include<stdio.h>
void main(){
	// convert second into hours minutes & seconds and print HH.MM.SS
	int s,h,m;
	printf("enter second: ");
	scanf("%d",&s);
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	s=s;
	printf(" %d",h);
	printf(":%d",m);
	printf(":%d",s);
}
