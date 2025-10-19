#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,i,j,score_a,score_b;
	score_a=score_b=0;
	string a,b;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a>>b;
		if(a==b){
			score_a++;
			score_b++;
		}
		if(a>b)score_a+=3;
		if(b>a)score_b+=3;
	}
	cout<<score_a<<" "<<score_b;
	
	return 0;
}
