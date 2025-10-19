#include<iostream>
using namespace std;

int main(){
	int n,i,j,k;
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++)cout<<" ";
			for(k=0;k<2*n-2*i-1;k++)cout<<"*";
			cout<<"\n";
		}
	}
	
	return 0;
}
