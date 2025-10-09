#include<stdio.h>
#define REST(a,b)a%b

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",REST(a,b));
	
	return 0;
}
