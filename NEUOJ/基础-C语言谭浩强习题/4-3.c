#include<stdio.h>
#include <math.h>

double cluculate(int n);

int main()
{
	int n,res;
	double Sn;
	scanf("%d",&n);
	Sn=cluculate(n);
	res=(int)Sn;
	printf("%d",res);
	
	return 0;
} 

double cluculate(int n)
{
	double Sn,i,base,temp;
	Sn=0;
	base=10; 
	i=0;
	while(i<n)
	{
		Sn+=pow(base,i)*2;
		temp+=Sn;
		i++;
	}
	return temp;
}
