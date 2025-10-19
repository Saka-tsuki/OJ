#include<iostream>
#include<cmath>
#define PI 3.1415926535897
using namespace std;

int main(){
	double a,b,c,C,s,l,h;
	cin>>a>>b>>C;
	C=C/180*PI;
	
	s=a*b*sin(C)/2;
	c=sqrt(a*a+b*b-2*a*b*cos(C));
	l=a+b+c;
	h=2*s/a;
	
	printf("%.8lf\n%.8lf\n%.8lf",s,l,h);
	
	return 0;
}
