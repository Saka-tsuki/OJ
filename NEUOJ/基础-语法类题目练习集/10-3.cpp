#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double sum,res,avg,i,n,c,temp;
	cin>>n;
	while(n!=0){
		sum=0;
		res=0;
		for(i=0;i<n;i++){
			cin>>temp;
			res+=temp*temp;
			sum+=temp;
		}
		avg=sum/n;
		c=sqrt((res-n*avg*avg)/n);
		printf("%.8lf\n",c);
		cin>>n;
	}
	
	return 0;
}
