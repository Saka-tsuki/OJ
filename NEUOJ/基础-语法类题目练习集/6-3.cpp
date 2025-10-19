#include<iostream>
using namespace std;

int main(){
	int i,j,q,n,room[4][3][10],b,f,r,v;
	cin>>n;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			for(q=0;q<10;q++){
				room[i][j][q]=0;
			}
		}
	}
	
	for(i=0;i<n;i++){
		cin>>b>>f>>r>>v;
		room[b-1][f-1][r-1]+=v;
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			for(q=0;q<10;q++){
				cout<<room[i][j][q]<<" ";
			}
			cout<<"\n";
		}
		if(i!=3)cout<<"####################\n";
	}
	
	return 0;
}
