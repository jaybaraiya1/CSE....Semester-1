#include<stdio.h>
void main(){
	int i=1,n,sum=0,avg;
	printf("enter number");
	while(1)
	{
		scanf("%d",&n);
      if(n==0){
      	break;
	  }
	sum+=n;	
	i++;	  
	}
	avg=sum/i;
	printf("%d %d",avg,sum);
	
}
