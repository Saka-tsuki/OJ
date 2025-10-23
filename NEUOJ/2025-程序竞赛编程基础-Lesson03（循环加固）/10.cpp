#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long n,i,temp1;
	double temp2;
	cin>>n;
	for(i=1;i<=n;i++){
		temp1=sqrt(i)*sqrt(n);
		if(temp1*temp1==i*n){
			cout<<i;
			break;
 		} 
	}
	
	return 0;
}
