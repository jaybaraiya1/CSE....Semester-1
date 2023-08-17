#include<stdio.h>
void main(){
	// convert   number of days into year week & day
	int d,y,w;
	printf("enter day: ");
	scanf("%d",&d);
	y=d/365;
	d=d%365;
	w=d/52;
	d=d%52;
	d=d;
	
	printf(" %d",y);
	printf(":%d",w);
	printf(":%d",d);
}
