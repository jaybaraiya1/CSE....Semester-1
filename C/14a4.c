#include<stdio.h>
void main(){
	int a[2000],i,j,sum=0,av,max,mini;
	printf("enter number");
	scanf("%d",&j);
	
	for(i=0;i<j;i++)
	{
		printf("element");
		scanf("%d",&a[i]);
		sum=sum+a[i];
		if(i==0)
		{
			max=a[i];
			mini=a[i];
		}
		
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<mini)
		{
			mini=a[i];
		}
}	
	av=sum/j;
	printf("\vsum%d",sum);
	printf("\vav%d",av);
	printf("\vmax%d",max);
	printf("\vmin%d",mini);
}
