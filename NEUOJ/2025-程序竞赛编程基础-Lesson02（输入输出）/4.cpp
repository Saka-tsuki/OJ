#include<iostream>
using namespace std;

int main(){
	long long a,b,i,n,res[100]={0},count;
	count=0;
	while(cin>>a>>b){
		if(a==0&&b==0)break;
		res[count]=a+b;
		count++;
	}
	for(i=0;i<count;i++){
		cout<<res[i]<<"\n";
	}
	
	return 0;
}
