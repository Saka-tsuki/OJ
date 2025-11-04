#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> deq;
	long long n,i,q,d,x,p;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>q;
		if(q==0){
			cin>>d>>x;
			if(d==0){
				deq.push_front(x);
			} 
			else if(d==1){
				deq.push_back(x);
			}
		}
		else if(q==1){
			cin>>p;
			cout<<deq[p]<<"\n";
		}
		else if(q==2){
			cin>>d;
			if(d==0){
				deq.pop_front();
			} 
			else if(d==1){
				deq.pop_back(); 
			}
		}
	}
	
	return 0;
}
