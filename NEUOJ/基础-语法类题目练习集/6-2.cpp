#include<iostream>
using namespace std;

int main(){
	int n,card[4][13],i,j,q;
	char p;
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			card[i][j]=1;
		}
	}
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>p>>q;
		if(p=='S')card[0][q-1]=0;
		else if(p=='H')card[1][q-1]=0;
		else if(p=='C')card[2][q-1]=0;
		else if(p=='D')card[3][q-1]=0;
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(card[i][j]){
				if(i==0)cout<<"S"<<" "<<j+1<<"\n";
				else if(i==1)cout<<"H"<<" "<<j+1<<"\n";
				else if(i==2)cout<<"C"<<" "<<j+1<<"\n";
				else if(i==3)cout<<"D"<<" "<<j+1<<"\n";
			}
		}
	}
	
	return 0;
}
