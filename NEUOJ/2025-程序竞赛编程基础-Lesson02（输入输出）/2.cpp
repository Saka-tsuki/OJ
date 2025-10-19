#include<iostream>
using namespace std;

int main(){
	long long a,b,i,n,res[100]={0};
	n=0;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		res[n]=a+b;
		n++;
	}
	for(i=0;i<n;i++){
		cout<<res[i]<<"\n";
	}
	
	return 0;
}
