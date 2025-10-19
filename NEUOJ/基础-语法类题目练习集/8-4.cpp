#include<iostream>
#include<string>
using namespace std;

int main(){
	string s,p,temp;
	cin>>s>>p;
	int lens,lenp,i,j,q;
	q=0;
	lens=s.size();
	lenp=p.size();
	s=s+s;
	for(i=0;i<lens;i++){
		temp="";
		for(j=i;j<i+lenp;j++){
			temp+=s[j];
		}
		if(temp==p){
			cout<<"Yes";
			q=1;
			break;
		}
	}
	if(q==0)cout<<"No";
	
	return 0;
}
