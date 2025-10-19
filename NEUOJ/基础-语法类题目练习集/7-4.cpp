#include<iostream>
using namespace std;

int main(){
	long long n,m,l,i,j,p,q;
	cin>>n>>m>>l;
	long long matrix1[n][m],matrix2[m][l],matrix3[n][l];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>matrix1[i][j];
		}
	} 
	
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			cin>>matrix2[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			matrix3[i][j]=0;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			for(p=0;p<m;p++){
				matrix3[i][j]+=matrix1[i][p]*matrix2[p][j];
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			cout<<matrix3[i][j]<<" ";
			if(j==l-1)cout<<"\n";
		}
	}
	
	return 0;
}
