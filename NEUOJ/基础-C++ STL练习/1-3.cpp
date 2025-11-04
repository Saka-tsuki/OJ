#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> mylist;
	auto it=mylist.end();
	long long x,q,d,i,j,re;
	cin>>q;
	for(i=0;i<q;i++){
		cin>>re;
		if(re==0){
			cin>>x;
			it=mylist.insert(it,x); 
		}
		else if(re==1){
			cin>>d;
			it=next(it,d);
		}
		else if(re==2){
			it=mylist.erase(it); 
		}
	}
	for(auto j:mylist){
		cout<<j<<"\n";
	}
	
	return 0;
}
