#include<stdio.h>
void main(){
	int i,*ptr1;
	float a,*ptr2;
     double k,*ptr3;
	  char q,*ptr4;
	  scanf("%c %d %f %lf",&q,&i,&a,&k);
	  ptr1=&i;
	  ptr2=&a;
	  ptr3=&k;
	  ptr4=&q;
	  printf("%c %d %f %lf",q,i,a,k);	
}
