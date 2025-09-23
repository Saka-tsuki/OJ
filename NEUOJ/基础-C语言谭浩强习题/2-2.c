#include<stdio.h>

struct Result
{
	float C1,Sa,Sb,Va,Vb;
 } ;

struct Result culculate(float r,float h)
 {	struct Result res;
 	float PI;
 	
 	PI=3.14;
 	res.C1=2*PI*r;
 	res.Sa=PI*r*r;
 	res.Sb=4*PI*r*r;
 	res.Va=4.0/3.0*PI*r*r*r;
 	res.Vb=res.Sa*h;
 	
 	return res;
 }


int main()
{
	float r,h;
	scanf("%f %f",&r,&h);
	struct Result res=culculate(r,h);
	printf("C1=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f",res.C1,res.Sa,res.Sb,res.Va,res.Vb);
	return 0;
 } 
