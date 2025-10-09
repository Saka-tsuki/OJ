#define change(a,b){t=a;a=b;b=t;}
#include<stdio.h>

int main(){
	int a,b,t;
	
	scanf("%d %d",&a,&b);
	change(a,b);
	printf("%d %d",a,b);
	
	return 0;
} 
