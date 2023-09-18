#include<stdio.h>
void main(){
	char ch;
	int a,b;
	
	printf("enter a and b");
	scanf("%d %d %c",&a,&b,&ch);
	switch (ch)
	{
		case '+':
		printf("addition is=%d",a+b);
		break;
	     case '-':
	     printf("subtraction=%d",a-b);
	     break;
	      case '*':
	      printf("multiplication=%d",a*b);
	      break;
	       case '/':
	       	printf("divition=%d",a/b);
	       	break;
	}
}
