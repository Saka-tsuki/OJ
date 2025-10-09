#include<stdio.h>

int main(){
	int n,m,i;
	scanf("%d",&n);
	char str[n];
	scanf("%s",str);
	scanf("%d",&m);
	
	for(i=m-1;i<n;i++){
		printf("%c",str[i]);
	}
	
	return 0;
}
