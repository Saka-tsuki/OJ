#include<iostream>
using namespace std;

int main (){
	int w,h,x,y,r;
	cin>>w>>h>>x>>y>>r;
	if(y+r>h||y-r<0){
		cout<<"No";
	}
	else if(x+r>w||x-r<0){
		cout<<"No";
	}
	else{
		cout<<"Yes";
	}
	
	return 0;
}
