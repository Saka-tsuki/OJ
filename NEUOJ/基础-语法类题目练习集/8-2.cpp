#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n,i,j,temp;
	char num[200][1000];
	n=0;
	for(i=0;i<200;i++){
		cin>>num[i];
		if(num[i][0]=='0')break;
		n++;
	}
	int sum[n];
	memset(sum,0,sizeof(sum));
	
	for(i=0;i<n;i++){
		for(j=0;j<1000;j++){
			if(num[i][j]=='\0')break;
			temp=num[i][j]-'0';
			sum[i]+=temp;
		}
	}
	
	for(i=0;i<n;i++){
		cout<<sum[i]<<"\n";
	}
	
	return 0;
}
