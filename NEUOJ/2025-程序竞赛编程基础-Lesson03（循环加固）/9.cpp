#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,i,j,sum;
	while(cin>>n){
		for(i=4;i<=n;i++){
			sum=1;
			for(j=2;j<=sqrt(i);j++){
				if(i%j==0&&j!=sqrt(i)){
					sum=sum+j+(i/j);
				}
				else if(j==sqrt(i)){
					sum+=j;
				}
			}
			if(sum==i)cout<<i<<" ";
		}
	}
	
	return 0;
}
