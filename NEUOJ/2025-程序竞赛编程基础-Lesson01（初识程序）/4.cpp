#include<iostream>
#include<iomanip>
#define PI 3.1415926
using namespace std;

int main()
{
	int r;
	cin>>r;
	cout<<fixed<<setprecision(5);
	cout<<4.0/3.0*PI*r*r*r;
	
	return 0;
}
