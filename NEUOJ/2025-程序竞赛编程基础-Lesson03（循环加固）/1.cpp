#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	while(cin>>n){
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				printf("%d*%d=%-4d",j,i,j*i);
			}
			cout<<"\n";
		}
	}
	
	return 0;
}
