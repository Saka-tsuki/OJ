#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> vec;
	int n,i,q,num;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>q;
		if(q==0){
			cin>>num;
			vec.push_back(num); 
		}
		if(q==1){
			cin>>num;
			cout<<vec[num]<<"\n";
		}
		if(q==2){
			vec.pop_back(); 
		}
	}
	
	return 0;
}
