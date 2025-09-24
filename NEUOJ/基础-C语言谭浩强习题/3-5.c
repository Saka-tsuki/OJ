#include<stdio.h>

int bonus(int i);

int main()
{
	int i;
	int profit;
	
	scanf("%d",&i);
	profit=bonus(i);
	printf("%d",profit);
	
	return 0;
}

int bonus(int i)
{
	int profit;
	if(i<=100000)
	profit=i*0.1;
	else if(i>100000 && i<=200000)
	profit=10000+(i-100000)*0.075;
	else if(i>200000 && i<=400000)
	profit=17500+(i-200000)*0.05;
	else if(i>400000 && i<=600000)
	profit=27500+(i-400000)*0.03;
	else if(i>600000 && i<=1000000)
	profit=33500+(i-600000)*0.015;
	else if(i>1000000)
	profit=39500+(i-1000000)*0.01;
	
	return profit;
}
