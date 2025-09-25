#include<stdio.h>

int main(){
	int n,res,i;
	
	res=1;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		res=(res+1)*2;
	}
	printf("%d",res);
	
	return 0;
}
