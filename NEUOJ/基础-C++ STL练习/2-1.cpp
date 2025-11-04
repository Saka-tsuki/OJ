#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
	long long n,q,t,x,re,i,temp;
	cin>>n>>q;
	vector<stack<long long>> stacks(n);
	for(i=0;i<q;i++){
		cin>>re;
		if(re==0){
			cin>>t>>x;
			stacks[t].push(x);
		}
		else if(re==1){
			cin>>t;
			if(stacks[t].empty())continue;
			cout<<stacks[t].top()<<"\n";
		}
		else if(re==2){
			cin>>t;
			if(stacks[t].empty())continue;
			stacks[t].pop();
		}
	}
	
	return 0;
} 
