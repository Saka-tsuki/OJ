#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n,i,j,k,temp,count;
	char c;
	while(cin>>n>>c){
		for(i=1;i<100;i++){
			temp=2*i*i-1;
			if(temp>n){
				count=i-1;
				temp=2*(count)*(count)-1;
				break;
			}
		}
		for(i=0;i<count;i++){
			for(j=0;j<i;j++)cout<<" ";
			for(k=0;k<2*count-2*i-1;k++)cout<<c;
			cout<<"\n";
		}
		for(i=1;i<count;i++){
			for(j=0;j<count-1-i;j++)cout<<" ";
			for(k=0;k<2*i+1;k++)cout<<c;
			cout<<"\n";
		}
		cout<<n-temp<<"\n";
	}
	
	return 0;
}
