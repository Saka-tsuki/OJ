#include<iostream>
#include<cstring> 
using namespace std;

int main(){
	int r,c,i,j;
	cin>>r>>c;
	
	int matrix[r+1][c+1],sumr[r],sumc[c],sum;
	sum=0;
	memset(sumr,0,sizeof(sumr));
	memset(sumc,0,sizeof(sumc));
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>matrix[i][j];
			sum+=matrix[i][j];
			sumr[i]+=matrix[i][j];
		}
	}
	
	for(j=0;j<c;j++){
		for(i=0;i<r;i++){
			sumc[j]+=matrix[i][j];
		}
	}
	
	for(i=0;i<r+1;i++){
		for(j=0;j<c+1;j++){
			if(j==c && i!=r)cout<<sumr[i]<<"\n";
			else if(i==r && j!=c)cout<<sumc[j]<<" ";
			else if(i==r && j==c)cout<<sum;
			else cout<<matrix[i][j]<<" ";
		}
	}
	
	return 0;
}
