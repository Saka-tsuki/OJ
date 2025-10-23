#include<iostream>
using namespace std;

int main(){
	int i,j,p,q,n,line;
	char ch;
	while(cin>>ch>>n){
		line=(n+1)/2;
		for(i=1;i<=line;i++){
			for(j=1;j<=line-i;j++){
				cout<<" ";
			}
			cout<<ch;
			for(p=1;p<(i-1)*2;p++){
				cout<<" ";
			}
			if(i!=1)cout<<ch;
			cout<<"\n";
			ch++;
		}
		ch-=2;
		for(i=1;i<line;i++){
			for(j=1;j<=i;j++){
				cout<<" ";
			}
			cout<<ch;
			for(p=1;p<(line-i-1)*2;p++){
				cout<<" ";
			}
			if(i!=line-1)cout<<ch;
			cout<<"\n";
			ch--;
		}
	}
	
	return 0;
}
