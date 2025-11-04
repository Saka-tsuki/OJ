#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
	long long n,q,t,x,re,i,s;
	cin>>n>>q;
	vector<list<long long>> lists(n);
	for(i=0;i<q;i++){
		cin>>re;
		if(re==0){
			cin>>t>>x;
			lists[t].push_back(x);
		}
		else if(re==1){
			cin>>t;
			if(lists[t].empty()){
				cout<<"\n";
				continue;
			}
			for(auto it:lists[t]){
				cout<<it<<" ";
			}
			cout<<"\n";
		}
		else if(re==2){
			cin>>s>>t;
			lists[t].splice(lists[t].end(),lists[s]);
		}
	}
	
	return 0;
} 
