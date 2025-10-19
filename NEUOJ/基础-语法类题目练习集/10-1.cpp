#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double x1,y1,x2,y2,res;
	cin>>x1>>y1>>x2>>y2;
	
	res=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	printf("%.8lf",res);
	
	return 0;
}
