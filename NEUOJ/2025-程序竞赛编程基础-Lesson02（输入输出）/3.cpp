#include<iostream>
using namespace std;

int main(){
	long long a,b,n,i,res[500]={0},count;
	count=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a>>b;
		res[i]=a+b;
		count++;
	}
	for(i=0;i<count;i++){
		cout<<res[i]<<"\n";
	}
	
	return 0;
}
