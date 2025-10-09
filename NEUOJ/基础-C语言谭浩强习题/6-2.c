#include<stdio.h>
#include<math.h>
void delta1(double a,double b,double c);
void delta2(double a,double b,double c);
void delta3(double a,double b,double c);

int main(){
	double a,b,c,delta;
	scanf("%lf %lf %lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if(delta>0)
		delta1(a,b,c);
	else if(delta==0)
		delta2(a,b,c);
	else if(delta<0)
		delta3(a,b,c);
	
	return 0;
} 

void delta1(double a,double b,double c){
	double delta,m,n;
	delta=b*b-4*a*c;
	m=(-b)/(2*a);
	n=(sqrt(b*b-4*a*c))/(2*a);
	printf("x1=%.3lf+%.3lf x2=%.3lf-%.3lf",m,n,m,n);
}

void delta2(double a,double b,double c){
	double m;
	m=(-b)/(2*a);
	printf("x1=%.3lf x2=%.3lf",m,m);
}

void delta3(double a,double b,double c){
	double delta,m,n;
	delta=4*a*c-b*b;
	m=(-b)/(2*a);
	n=(sqrt(4*a*c-b*b))/(2*a);
	printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi",m,n,m,n);
}
