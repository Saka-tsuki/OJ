#include<iostream>
using namespace std;

int main(){
	int h,w,i,j;
	while(cin>>h>>w){
		if(h==0&&w==0)break;
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				cout<<"#";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	
	return 0;
}
