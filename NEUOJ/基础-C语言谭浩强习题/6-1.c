#include<stdio.h>

int gcd(int a,int b);
int lcm(int a,int b);

int main()
{
	int a,b,x,y;
	scanf("%d %d",&a,&b);
	x=gcd(a,b);
	y=lcm(a,b);
	printf("%d %d",x,y);
	
	return 0;
} 
 
int gcd(int a,int b)
{
	int temp;
	
	if(b>a)
	{
		temp=b;
		b=a;
		a=temp;
	}
	
	while(b!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	return a;
}

int lcm(int a,int b)
{
	int temp;
	temp=a*b/gcd(a,b);
	
	return temp;
}
