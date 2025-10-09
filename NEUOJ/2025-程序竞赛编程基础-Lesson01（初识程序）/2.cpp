#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double delta,x1,x2;
	
	delta=b*b-4*a*c;
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
	
	cout<<fixed<<setprecision(2);
	cout<<"r1="<<x1<<"\n"<<"r2="<<x2; 
	
	return 0;
}
