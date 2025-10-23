#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long n,i,j,num,count;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num;
		count=0;
		for(j=1;j<=sqrt(num);j++){
			if(num%j==0)count+=2;
			if(j==sqrt(num))count--;
		}
		cout<<count<<"\n";
	}
	
	return 0;
}
