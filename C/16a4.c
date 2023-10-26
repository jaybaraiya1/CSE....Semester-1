#include<stdio.h>
void main(){
	int arr[3][3],m[3][3],sum[3][3],a,b,c,d,i,j;
	for(a=0;a<3;a++){
		for(b=0;b<3;b++)
		{
             scanf("%d",&arr[a][b]);	
		}
	printf("\n");
	
}for(a=0;a<3;a++){
		for(b=0;b<3;b++)
		{
            printf("%d",arr[a][b]);	
		}
	printf("\n");
	

}
for(c=0;c<3;c++){
		for(d=0;d<3;d++)
		{
             scanf("%d",&m[c][d]);	
		}
	printf("\n");
	
}for(c=0;c<3;c++){
		for(d=0;d<3;d++)
		{
            printf("%d",m[c][d]);	
		}
	printf("\n");
	

}
for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
             sum[i][j]=arr[i][j]+m[i][j];
		}
	printf("\n");
	
}for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
            printf("%d",sum[i][j]);	
		}
	printf("\n");
	

}
	
}
