#include<stdio.h>
void main(){
	int i=1,n,f=1;
	scanf("%d",&n);
	
		if(n==0)
		{
			printf("f is 1");
		}
		else if(n>0)
		{while(i<=n)
			{
				f=f*i;
				i++;
			}
				printf("%d",f);
		}
		else{
			printf("invalid");
		}
	
}
