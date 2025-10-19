#include<iostream>
using namespace std;

int main(){
	int n,m,i,j;
	cin>>n>>m;
	int matrix[n][m],vector[m],res[n];
	for(i=0;i<n;i++){
		res[i]=0;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>matrix[i][j];
		}
	}
	
	for(i=0;i<m;i++)cin>>vector[i];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			res[i]+=matrix[i][j]*vector[j];
		}
	}
	
	for(i=0;i<n;i++)cout<<res[i]<<"\n";
	
	return 0;
}
