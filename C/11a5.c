#include<stdio.h>
void main(){
	int i,y;
	printf("enter number");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
{
 if(y%i==0)
{
	printf("%d\n",i);
}
}

}
