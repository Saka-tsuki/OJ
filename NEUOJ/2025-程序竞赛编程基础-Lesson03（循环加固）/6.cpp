#include<iostream>
#include<string>
using namespace std;

int main(){
	string a,b;
	long long lena,lenb,i,j,sum,x,y;
	while(cin>>a>>b){
		sum=0;
		lena=a.size();
		lenb=b.size();
		for(i=0;i<lena;i++){
			for(j=0;j<lenb;j++){
				x=a[i]-'0';
				y=b[j]-'0';
				sum+=x*y;
			}
		}
		cout<<sum<<"\n";
	}
	
	return 0;
}
