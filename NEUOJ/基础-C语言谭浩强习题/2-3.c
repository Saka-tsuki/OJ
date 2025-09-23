#include<stdio.h>

float trans(float F);

int main()
{
	float F,C;
	scanf("%f",&F);
	C=trans(F);
	printf("c=%.2f",C);
	
	return 0;
}

float trans(float F)
{
	float C;
	C=5.0*(F-32)/9.0;
	
	return C;
}
