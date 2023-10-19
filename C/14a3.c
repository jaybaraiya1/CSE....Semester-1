#include<stdio.h>
void main(){
	int a[2000],i,j,even=0,ode=0;
	printf("enter number");
	scanf("%d",&j);
	
	for(i=0;i<j;i++)
	{
		printf("element");
		scanf("%d",&a[i]);
	   	if(i%2==0)
	   	{
	   		even=even+1;
		   }
		   else{
		   	ode=ode+1;
		   }
	   }
	
	printf("\neven%d",even);
	printf("\node%d",ode);
}
	

