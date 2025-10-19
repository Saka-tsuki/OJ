#include<iostream>
using namespace std;

int main(){
	int n,num[100],i;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	for(i=n-1;i>=0;i--){
		if(i==0)cout<<num[i];
		else cout<<num[i]<<" ";
	}
	
	return 0;
}
