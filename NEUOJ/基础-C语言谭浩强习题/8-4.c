#include<stdio.h>

void change(int res[],int n);

int main(){
	int n,i;
	scanf("%d",&n);
	int res[n];
	
	change(res,n);
	
	return 0;
} 

void change(int res[],int n){
	int i,m,temp;
	for(i=0;i<n;i++){
		scanf("%d",&res[i]);
	}
	scanf("%d",&m);
	for(i=n-m;i<n;i++){
		printf("%d ",res[i]);
	}
	for(i=0;i<n-m;i++){
		printf("%d ",res[i]);
	}
}
