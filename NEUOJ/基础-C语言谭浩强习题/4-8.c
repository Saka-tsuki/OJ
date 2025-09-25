#include<stdio.h>

int main(){
	double n,a,b,i,res,temp;
	a=2;b=1;
	
	scanf("%lf",&n);
	for(i=1;i<=n;i++){
		res+=(a/b);
		temp=a;
		a+=b;
		b=temp;
	}
	printf("%.2lf",res);
	return 0;
} 
