#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int i=max(a,b,c);
	printf("%d",i);
}
int max(int a,int b,int c)
{
	int i;
	if(a>b && a>c)
	i=a;
	else if(b>c)
	i=b;
	else
	i=c;
	return i;
}
