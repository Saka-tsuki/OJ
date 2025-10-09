#include<iostream>
using namespace std;

int main()
{
	float num[3],sum;
	sum=0;
	for(int i=0;i<3;i++)
	{
		scanf("%f",&num[i]);
		getchar();
	}
	for(int i=0;i<3;i++)
	{
		sum+=num[i];
	}
		printf("%.2f%%",sum/3.0);
	return 0;
}
