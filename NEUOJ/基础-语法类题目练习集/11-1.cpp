#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int num[6],face[6]={0,1,2,3,4,5},i;
	for(i=0;i<6;i++){
		cin>>num[i];
	}
	
	char order;
	while(cin>>order){
		if(order=='E'){
			swap(face[0],face[3]);swap(face[3],face[2]);swap(face[3],face[5]);
		}
		else if(order=='N'){
			swap(face[0],face[1]);swap(face[1],face[4]);swap(face[1],face[5]);
		}
		else if(order=='S'){
			swap(face[0],face[1]);swap(face[0],face[5]);swap(face[0],face[4]);
		}
		else if(order=='W'){
			swap(face[0],face[2]);swap(face[2],face[3]);swap(face[2],face[5]);
		}
	}
	cout<<num[face[0]];
	
	return 0;
} 
