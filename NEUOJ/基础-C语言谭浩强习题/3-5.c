#include<stdio.h>

int bonus(int i);

int main()
{
	int i,profit;
	
	scanf("%d",i)
	profit=bonus(i);
	printf("%d",profit);
	
	return 0;
}

int bonus(int i)
{
	int profit;
	if(i<=100000)
	ptofit=i*1.1;
	else if(i>100000 && i<=200000)
	profit=i+10000+(i-100000)*0.075;
	else if(i>200000 && i<=400000)
	profit=i+20000
}
