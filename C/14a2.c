#include<stdio.h>
void main(){
	int a[2000],i,j,po=0,ne=0;
	printf("enter number");
	scanf("%d",&j);
	
	for(i=0;i<j;i++)
	{
		printf("element");
		scanf("%d",&a[i]);
	   	if(a[i]>=0)
	   	{
	   		po=po+1;
		   }
		else{
		   	ne=ne+1;
		   }
	   }
	
	printf("\npositive%d",po);
	printf("\nneagativ%d",ne);
}
