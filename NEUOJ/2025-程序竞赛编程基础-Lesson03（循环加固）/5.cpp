#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int i,j;
	float n;
	char ch;
	while(cin>>n){
		cin>>ch;
		for(i=0;i<round(n/2.0);i++){
			for(j=0;j<n;j++){
				cout<<ch;
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	
	return 0;
}
