#include<iostream>
#include<string>
using namespace std;

int main(){
	string w,t;
	int n,len,i;
	n=0;
	cin>>w;
	while(cin>>t){
		len=t.size();
		for(i=0;i<len;i++){
			if(t[i]>='A'&&t[i]<='Z')t[i]+=32;
		}
		if(t==w)n++;
	}
	cout<<n;
	
	return 0;
}
