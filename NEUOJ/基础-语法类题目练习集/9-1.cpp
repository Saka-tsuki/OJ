#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
	int n,m,h,i,j,k,len;
	string s,temp;
	while(cin>>s){
		if(s=="-")break;
		len=s.size();
		cin>>m;
		for(i=0;i<m;i++){
			cin>>h;
			for(j=0;j<h;j++){
				s=s+s[j];
			}
			for(k=h;k<h+len;k++){
				temp=temp+s[k];
			}
			s=temp;
			temp="";
		}
		cout<<s<<"\n";
	}
	
	return 0;
}
