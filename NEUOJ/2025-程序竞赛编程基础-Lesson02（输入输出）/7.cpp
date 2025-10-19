#include<iostream>
using namespace std;

int main(){
	long long a,b,count,i,res[100];
	count=0;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		res[count]=a+b;
		count++;
	}
	for(i=0;i<count;i++){
		cout<<"Case "<<i+1<<": "<<res[i]<<"\n";
	}
	
	return 0;
}
