#include<iostream>
using namespace std;

int main(){
	long long temp,i,n,res[100]={0},count;
	count=0;
	while(cin>>n){
		if(n==0)break;
		for(i=0;i<n;i++){
			cin>>temp;
			res[count]+=temp;
		}
		count++;
	}
	for(i=0;i<count;i++){
		cout<<res[i]<<"\n";
	}
	
	return 0;
}
