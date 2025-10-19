#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double d1,d2,d3,d4,res,temp,max;
	max=0;
	int n,i;
	cin>>n;
	double x[n],y[n];
	for(i=0;i<n;i++){
		cin>>x[i];
	}
	for(i=0;i<n;i++){
		cin>>y[i];
	}
	for(i=0;i<n;i++){
		temp=fabs(x[i]-y[i]);
		res+=temp;
	}
	d1=res;
	res=0;
	printf("%.6lf\n",d1);
	
	for(i=0;i<n;i++){
		temp=pow(x[i]-y[i],2);
		res+=temp;
	}
	d2=sqrt(res);
	res=0;
	printf("%.6lf\n",d2);
	
	for(i=0;i<n;i++){
		temp=pow(fabs(x[i]-y[i]),3);
		res+=temp;
	}
	d3=cbrt(res);
	res=0;
	printf("%.6lf\n",d3);
	
	for(i=0;i<n;i++){
		temp=fabs(x[i]-y[i]);
		max=fmax(temp,max);
	}
	d4=max;
	printf("%.6lf",d4);
	
	return 0;
}
