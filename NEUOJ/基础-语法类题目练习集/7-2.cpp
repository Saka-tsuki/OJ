#include<iostream>
using namespace std;

int main(){
	int n,x,i,j,k,count,res[100],q;
	q=0;
	while(1){
		count=0;
		cin>>n>>x;
		if(n==0)break;
		for(i=1;i<=n-2;i++){
			for(j=i+1;j<=n-1;j++){
				for(k=j+1;k<=n;k++){
					if(i+j+k==x)count++;
				}
			}
		}
		res[q]=count;
		q++;
	}
	for(i=0;i<q;i++){
		cout<<res[i]<<"\n";
	}
	
	return 0;
}
