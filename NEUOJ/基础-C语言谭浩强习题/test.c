#include<stdio.h>

int main()
{
	float r,h,C1,Sa,Sb,Va,Vb,PI;
	scanf("%f %f",&r,&h);
	
	PI=3.14;
 	C1=2*PI*r;
 	Sa=PI*r*r;
 	Sb=4*PI*r*r;
 	Va=4/3*PI*r*r;
 	Vb=Sa*h;
 	
	printf("C1=%f\nSa=%f\nSb=%f\nVa=%f\nVb=%f",C1,Sa,Sb,Va,Vb);
	
	return 0;
 } 
