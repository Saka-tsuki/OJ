#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	long long n,q,t,x,re,i,temp;
	cin>>n>>q;
	vector<queue<long long>> queues(n);
	for(i=0;i<q;i++){
		cin>>re;
		if(re==0){
			cin>>t>>x;
			queues[t].push(x);
		}
		else if(re==1){
			cin>>t;
			if(queues[t].empty())continue;
			cout<<queues[t].front()<<"\n";
		}
		else if(re==2){
			cin>>t;
			if(queues[t].empty())continue;
			queues[t].pop();
		}
	}
	
	return 0;
} 
