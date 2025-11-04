#include<iostream>
#include<vector>
using namespace std;

int main(){
	long long n,q,t,x,i,j,re;
	vector<long long> vec;
	cin>>n>>q;
	vector<vector<long long>>myvec(n,vec);
	
	for(i=0;i<q;i++){
		cin>>re;
		if(re==0){
			cin>>t>>x;
			myvec[t].push_back(x); 
		}
		else if(re==1){
			cin>>t;
			for(auto it:myvec[t]){
				cout<<it<<" ";
			}
			cout<<"\n";
		}
		else if(re==2){
			cin>>t;
			myvec[t].clear();
		}
	}
	
	return 0;
}
