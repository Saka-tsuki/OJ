#include<iostream>
#define PI 3.1415926535
using namespace std;

int main()
{
	long double r,c,s;
	cin>>r;
	c=2.0*PI*r;
	s=PI*r*r;
	printf("%.6Lf %.6Lf",s,c);
	
	return 0;
}
