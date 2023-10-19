#include<stdio.h>
void main(){
	int a[2000],i,j;
	printf("enter number");
	scanf("%d",&j);
	
	for(i=0;i<j;i++)
	{
		printf("element");
		scanf("%d",&a[i]);
	}
	for(i=0;i<j;i++)
	{
			printf("\vnormal%d",a[i]); 
	}
	for(i=j-1;i>=0;i--)
	{
		printf("\vreverse%d",a[i]);
	}
}
