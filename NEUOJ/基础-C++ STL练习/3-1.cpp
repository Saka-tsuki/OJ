#include<iostream>
using namespace std;

int main(){
	long num[3],i,max,min;
	for(i=0;i<3;i++){
		cin>>num[i];
	}
	max=num[0];min=num[0];
	for(i=0;i<3;i++){
		if(num[i]<min)min=num[i];
		if(num[i]>max)max=num[i];
	}
	cout<<min<<" "<<max;
	
	return 0;
}
