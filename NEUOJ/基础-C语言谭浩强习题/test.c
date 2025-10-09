#include<stdio.h>

int main(){
	char *p;
	char **ptr;
	char a[20];
	scanf("%s",a);
	p=&a[0];
	ptr=&p;
	printf("%d",*ptr) ;
	 
} 
