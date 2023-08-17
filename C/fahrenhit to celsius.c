#include<stdio.h>
void main(){
	// fahrenhit to celsius
	double c,f;
	printf("enter value of f: ");
	scanf("%lf",&f);
	c=(((f-32)*5)/9);
	printf("value=%lf",c);
}
