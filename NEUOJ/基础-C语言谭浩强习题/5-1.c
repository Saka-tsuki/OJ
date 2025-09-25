#include<stdio.h>

int main(){
	int n,i,j,k;
	scanf("%d",&n);
	k=0;
	int prime[n+1];
	int in_prime[n+1];
	for(i=0;i<=n;i++){
		prime[i]=1;
	}
	
	prime[0]=0;prime[1]=0;
	
	for(i=2;i<=n;i++){
		if(prime[i]==1){
			in_prime[k]=i;
			k++;
		}
		for(j=0;j<=n;j++){
			if(i*in_prime[j]>n){
				break;
			}
			prime[i*in_prime[j]]=0;
			if(i%in_prime[j]==0){
				break;
			}
		}
	}
		
	for(j=0;j<=n;j++){
		if(prime[j]==1)
		printf("%d\n",j);
	}
	
	return 0;
}
