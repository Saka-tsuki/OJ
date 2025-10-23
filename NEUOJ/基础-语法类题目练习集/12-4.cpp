#include<iostream>
using namespace std;

int main(){
	int n,i,j,x;
	x=0;
	cin>>n;
	int num[n][6];
	
	for(i=0;i<n;i++){
		for(j=0;j<6;j++){
			cin>>num[i][j];
		}
	}
	for(i=0;i<n;i++){
		if(x==1)break;
		for(j=i+1;j<n;j++){
			if(num[i][0]==num[j][0]&&num[i][1]==num[j][1]&&num[i][2]==num[j][2]&&num[i][3]==num[j][3]&&num[i][4]==num[j][4]&&num[i][5]==num[j][5]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][4]&&num[i][1]==num[j][0]&&num[i][2]==num[j][2]&&num[i][3]==num[j][3]&&num[i][4]==num[j][5]&&num[i][5]==num[j][1]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][5]&&num[i][1]==num[j][4]&&num[i][2]==num[j][2]&&num[i][3]==num[j][3]&&num[i][4]==num[j][1]&&num[i][5]==num[j][0]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][1]&&num[i][1]==num[j][5]&&num[i][2]==num[j][2]&&num[i][3]==num[j][3]&&num[i][4]==num[j][0]&&num[i][5]==num[j][4]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][0]&&num[i][1]==num[j][4]&&num[i][2]==num[j][3]&&num[i][3]==num[j][2]&&num[i][4]==num[j][1]&&num[i][5]==num[j][5]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][4]&&num[i][1]==num[j][5]&&num[i][2]==num[j][3]&&num[i][3]==num[j][2]&&num[i][4]==num[j][0]&&num[i][5]==num[j][1]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][5]&&num[i][1]==num[j][1]&&num[i][2]==num[j][3]&&num[i][3]==num[j][2]&&num[i][4]==num[j][4]&&num[i][5]==num[j][0]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][1]&&num[i][1]==num[j][0]&&num[i][2]==num[j][3]&&num[i][3]==num[j][2]&&num[i][4]==num[j][5]&&num[i][5]==num[j][4]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][2]&&num[i][1]==num[j][1]&&num[i][2]==num[j][5]&&num[i][3]==num[j][0]&&num[i][4]==num[j][4]&&num[i][5]==num[j][3]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][1]&&num[i][1]==num[j][3]&&num[i][2]==num[j][5]&&num[i][3]==num[j][0]&&num[i][4]==num[j][2]&&num[i][5]==num[j][4]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][3]&&num[i][1]==num[j][4]&&num[i][2]==num[j][5]&&num[i][3]==num[j][0]&&num[i][4]==num[j][1]&&num[i][5]==num[j][2]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][4]&&num[i][1]==num[j][2]&&num[i][2]==num[j][5]&&num[i][3]==num[j][0]&&num[i][4]==num[j][3]&&num[i][5]==num[j][1]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][1]&&num[i][1]==num[j][2]&&num[i][2]==num[j][0]&&num[i][3]==num[j][5]&&num[i][4]==num[j][3]&&num[i][5]==num[j][4]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][2]&&num[i][1]==num[j][4]&&num[i][2]==num[j][0]&&num[i][3]==num[j][5]&&num[i][4]==num[j][1]&&num[i][5]==num[j][3]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][4]&&num[i][1]==num[j][3]&&num[i][2]==num[j][0]&&num[i][3]==num[j][5]&&num[i][4]==num[j][2]&&num[i][5]==num[j][1]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][3]&&num[i][1]==num[j][1]&&num[i][2]==num[j][0]&&num[i][3]==num[j][5]&&num[i][4]==num[j][4]&&num[i][5]==num[j][2]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][0]&&num[i][1]==num[j][2]&&num[i][2]==num[j][4]&&num[i][3]==num[j][1]&&num[i][4]==num[j][3]&&num[i][5]==num[j][5]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][2]&&num[i][1]==num[j][5]&&num[i][2]==num[j][4]&&num[i][3]==num[j][1]&&num[i][4]==num[j][0]&&num[i][5]==num[j][3]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][5]&&num[i][1]==num[j][3]&&num[i][2]==num[j][4]&&num[i][3]==num[j][1]&&num[i][4]==num[j][2]&&num[i][5]==num[j][0]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][3]&&num[i][1]==num[j][0]&&num[i][2]==num[j][4]&&num[i][3]==num[j][1]&&num[i][4]==num[j][5]&&num[i][5]==num[j][2]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][2]&&num[i][1]==num[j][0]&&num[i][2]==num[j][1]&&num[i][3]==num[j][4]&&num[i][4]==num[j][5]&&num[i][5]==num[j][3]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][0]&&num[i][1]==num[j][3]&&num[i][2]==num[j][1]&&num[i][3]==num[j][4]&&num[i][4]==num[j][2]&&num[i][5]==num[j][5]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][3]&&num[i][1]==num[j][5]&&num[i][2]==num[j][1]&&num[i][3]==num[j][4]&&num[i][4]==num[j][0]&&num[i][5]==num[j][2]){
			cout<<"NO";x=1;break;}
			else if(num[i][0]==num[j][5]&&num[i][1]==num[j][2]&&num[i][2]==num[j][1]&&num[i][3]==num[j][4]&&num[i][4]==num[j][3]&&num[i][5]==num[j][0]){
			cout<<"NO";x=1;break;}
		}
	}
	if(x==0)cout<<"YES";
	
	return 0;
}
