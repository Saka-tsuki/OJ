#include<stdio.h>

int function(int x);

int main()
{
	int x,y;
	scanf("%d",&x);
	y=function(x);
	printf("%d",y);
	
	return 0;
}

int function(int x)
{	
	int y;
	if(x<1)
	y=x;
	else if(x>=1 && x<10)
	y=2*x-1;
	else if(x>=10)
	y=3*x-11;
	
	return y;
}
