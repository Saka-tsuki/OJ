#include<stdio.h>

int main(){
	int matrix[3][3],n,i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&n);
			matrix[i][j]=n;
		}
	}
	
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
} 
