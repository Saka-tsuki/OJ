#include<stdio.h>

int maximum(int a,int b,int c);

int main()
{
	int a,b,c,max;
	scanf("%d %d %d",&a,&b,&c);
	max=maximum(a,b,c);
	printf("%d",max);
	
	return 0;
 } 
 
 int maximum(int a,int b,int c)
 {
 	int max;
 	if(a>b && a>c)
 	max=a;
 	else if(b>c)
 	max=b;
 	else
 	max=c;
 	
 	return max;
 }
