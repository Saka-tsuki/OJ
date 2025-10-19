#include<iostream>
using namespace std;

int main(){
	int i,m[50],f[50],r[50],count;
	count=0;
	for(i=0;i<50;i++){
		cin>>m[i]>>f[i]>>r[i];
		if(m[i]==-1 && f[i]==-1 && r[i]==-1){
			break;
		}
		count++;
	} 
	for(i=0;i<count;i++){
		if(m[i]==-1 || f[i]==-1)cout<<"F"<<"\n";
		else if(m[i]+f[i]>=80)cout<<"A"<<"\n";
		else if(m[i]+f[i]>=65 && m[i]+f[i]<80)cout<<"B"<<"\n";
		else if(m[i]+f[i]>=50 && m[i]+f[i]<65)cout<<"C"<<"\n";
		else if(m[i]+f[i]>=30 && m[i]+f[i]<50 && r[i]>=50)cout<<"C"<<"\n";
		else if(m[i]+f[i]>=30 && m[i]+f[i]<50 && r[i]<50)cout<<"D"<<"\n";
		else if(m[i]+f[i]<30)cout<<"F"<<"\n";
	}
	
	return 0;
}
