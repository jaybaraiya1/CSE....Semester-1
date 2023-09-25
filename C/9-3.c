#include<stdio.h>
void main(){
	int i=1,x,y,a=1;
	scanf("%d%d",&x,&y);
	while(i<=y)
	{
		a=a*x;
		i++;
		
	}
	printf("%d\n",a);
}
