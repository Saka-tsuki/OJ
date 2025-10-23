#include<iostream>
using namespace std;

int main(){
	int num[6],face[6]={0,1,2,3,4,5},i,q,a,b;
	for(i=0;i<6;i++){
		cin>>num[i];
	}
	cin>>q;
	
	for(i=0;i<q;i++){
		cin>>a>>b;
		if(a==num[0]&&b==num[1]||a==num[1]&&b==num[5]||a==num[5]&&b==num[4]||a==num[4]&&b==num[0])cout<<num[2]<<"\n";
		else if(a==num[0]&&b==num[4]||a==num[4]&&b==num[5]||a==num[5]&&b==num[1]||a==num[1]&&b==num[0])cout<<num[3]<<"\n";
		else if(a==num[2]&&b==num[0]||a==num[0]&&b==num[3]||a==num[3]&&b==num[5]||a==num[5]&&b==num[2])cout<<num[1]<<"\n";
		else if(a==num[0]&&b==num[2]||a==num[2]&&b==num[5]||a==num[5]&&b==num[3]||a==num[3]&&b==num[0])cout<<num[4]<<"\n";
		else if(a==num[2]&&b==num[1]||a==num[1]&&b==num[3]||a==num[3]&&b==num[4]||a==num[4]&&b==num[2])cout<<num[5]<<"\n";
		else if(a==num[2]&&b==num[4]||a==num[4]&&b==num[3]||a==num[3]&&b==num[1]||a==num[1]&&b==num[2])cout<<num[0]<<"\n";
	}
	
	return 0;
}
