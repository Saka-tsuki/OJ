#include<stdio.h>
#include<math.h>
#define S(a,b,c) (a+b+c)/2; 
#define S_area(a,b,c,d) sqrt(d*(d-a)*(d-b)*(d-c))

int main(){
	double a,b,c,d,s;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	d=S(a,b,c);
	s=S_area(a,b,c,d);
	printf("%.3lf",s);
	
	return 0;
}

