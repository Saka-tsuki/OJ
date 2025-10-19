#include<iostream>
using namespace std;

int main(){
	int i,c[100],f,count;
	count=0;
	while(scanf("%d",&f)!=EOF){
		c[count]=5*(f-32)/9;
		count++;
	}
	for(i=0;i<count;i++){
		cout<<"Celsius = "<<c[i]<<"\n";
	}
	return 0;
}
