#include<iostream>
using namespace std;

int main(){
	long long temp,i,j,n,res[100]={0},count;
	cin>>count;
	for(i=0;i<count;i++){
		cin>>n;
		if(n==0)break;
		for(j=0;j<n;j++){
			cin>>temp;
			res[i]+=temp;
		}
	}
	for(i=0;i<count;i++){
		cout<<res[i]<<"\n";
	}
	
	return 0;
}
