#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<long long> vec;
	long long n,q,b,c,i,re,num;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num;
		vec.push_back(num);
	}
	cin>>q;
	for(i=0;i<q;i++){
		cin>>re>>b>>c;
		if(re==0){
			auto it=min_element(vec.begin()+b,vec.begin()+c);
			cout<<*it<<"\n";
		}
		else if(re==1){
			auto it=max_element(vec.begin()+b,vec.begin()+c);
			cout<<*it<<"\n";
		}
	}
}
