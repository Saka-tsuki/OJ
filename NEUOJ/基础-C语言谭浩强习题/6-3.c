#include<stdio.h>

int main(){
	long long n,i,j;
	j=1;
	scanf("%lld",&n);
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			printf("not prime");
			j=0;
			break;
		}
		
	}
	if(j)
	printf("prime");
	
	return 0;
}
