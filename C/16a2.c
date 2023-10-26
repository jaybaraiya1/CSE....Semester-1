#include<stdio.h>
void main(){
	int arr[3][3],a,b,po=0,ne=0;
	for(a=0;a<3;a++){
		for(b=0;b<3;b++)
		{
             scanf("%d",&arr[a][b]);
			 if(arr[a][b]<0){
			 	ne=ne+1;
			 }	
			 else 
			 {
			 po=po+1;
			 }
		}
	printf("\n");
	
}for(a=0;a<3;a++){
		for(b=0;b<3;b++)
		{
            printf("%d",arr[a][b]);	
            
		}
	printf("\n");
	

}
printf("\nposetive number%d",po);
printf("\nnegetive number%d",ne);
	
}
