#include<stdio.h>

long long cluculate(int n);

int main()
{
	long long Sn;
	int n;
	scanf("%d",&n);
	Sn=cluculate(n);
	printf("%lld",Sn);
	
	return 0;
}

long long cluculate(int n)
{
	long long temp,res;
	int i;
	res=0;
	temp=1;
	for(i=1;i<=n;i++)
	{
		temp*=i;
		res+=temp;
	}
	return res;
}
