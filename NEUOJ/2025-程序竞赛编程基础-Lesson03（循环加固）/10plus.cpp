#include<iostream>
using namespace std;

int main(){
	long long n,i,j,temp,count,res;
	res=1;count=0;
	cin>>n;
	temp=n;
	if(n==1){
		cout<<1;
		return 0;
	}
	if(temp%2==0){
		while(temp%2==0){
			count++;
			temp/=2;
		}
		if(count%2==1)res*=2;
	}
	for(i=3;i*i<=temp;i+=2){
		count=0;
		if(temp%i==0){
			while(temp%i==0){
				count++;
				temp/=i;
			}
			if(count%2==1)res*=i;
		}
	}
	if(temp>1)res*=temp;
	cout<<res;
	
	return 0;
}
