#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float a,b,c;
	a=18.0/2.0-17.0/2.0;
	b=18.0/3.0-17.0/3.0;
	c=18.0/9.0-17.0/9.0;
	
	cout<<fixed<<setprecision(4);
	cout<<a<<" "<<b<<" "<<c;
	
	return 0;
}
