#include<iostream>
using namespace std;

int main(){
	int h,w,i,j;
	while(cin>>h>>w){
		if(h==0&w==0)break;
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if(i%2==0&&j%2==0)cout<<"#";
				else if(i%2==0&&j%2==1)cout<<".";
				else if(i%2==1&&j%2==0)cout<<".";
				else cout<<"#";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	
	return 0;
}
