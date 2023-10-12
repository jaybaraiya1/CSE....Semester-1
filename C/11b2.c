#include<stdio.h>
void main(){
	int j,a[10]={0},cfn,i,n;
	printf("enter array");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		j=n%10;
		n=n/10;
		a[j]++;
		
	}
	for(i=0;i<10;i++)
	{if(a[i]>0){
	
		printf("frequenecy of  %d is %d\n",i,a[i]);
	}}
	
}
