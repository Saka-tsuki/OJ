#include<iostream>
using namespace std;

int main(){
	int num1[6],i,num2[6];
	for(i=0;i<6;i++){
		cin>>num1[i];
	}
	for(i=0;i<6;i++){
		cin>>num2[i];
	}
	if(num2[0]==num1[0]&&num2[1]==num1[1]&&num2[2]==num1[2]&&num2[3]==num1[3]&&num2[4]==num1[4]&&num2[5]==num1[5])cout<<"YES";
	else if(num2[0]==num1[4]&&num2[1]==num1[0]&&num2[2]==num1[2]&&num2[3]==num1[3]&&num2[4]==num1[5]&&num2[5]==num1[1])cout<<"YES";
	else if(num2[0]==num1[5]&&num2[1]==num1[4]&&num2[2]==num1[2]&&num2[3]==num1[3]&&num2[4]==num1[1]&&num2[5]==num1[0])cout<<"YES";
	else if(num2[0]==num1[1]&&num2[1]==num1[5]&&num2[2]==num1[2]&&num2[3]==num1[3]&&num2[4]==num1[0]&&num2[5]==num1[4])cout<<"YES";
	else if(num2[0]==num1[0]&&num2[1]==num1[4]&&num2[2]==num1[3]&&num2[3]==num1[2]&&num2[4]==num1[1]&&num2[5]==num1[5])cout<<"YES";
	else if(num2[0]==num1[4]&&num2[1]==num1[5]&&num2[2]==num1[3]&&num2[3]==num1[2]&&num2[4]==num1[0]&&num2[5]==num1[1])cout<<"YES";
	else if(num2[0]==num1[5]&&num2[1]==num1[1]&&num2[2]==num1[3]&&num2[3]==num1[2]&&num2[4]==num1[4]&&num2[5]==num1[0])cout<<"YES";
	else if(num2[0]==num1[1]&&num2[1]==num1[0]&&num2[2]==num1[3]&&num2[3]==num1[2]&&num2[4]==num1[5]&&num2[5]==num1[4])cout<<"YES";
	else if(num2[0]==num1[2]&&num2[1]==num1[1]&&num2[2]==num1[5]&&num2[3]==num1[0]&&num2[4]==num1[4]&&num2[5]==num1[3])cout<<"YES";
	else if(num2[0]==num1[1]&&num2[1]==num1[3]&&num2[2]==num1[5]&&num2[3]==num1[0]&&num2[4]==num1[2]&&num2[5]==num1[4])cout<<"YES";
	else if(num2[0]==num1[3]&&num2[1]==num1[4]&&num2[2]==num1[5]&&num2[3]==num1[0]&&num2[4]==num1[1]&&num2[5]==num1[2])cout<<"YES";
	else if(num2[0]==num1[4]&&num2[1]==num1[2]&&num2[2]==num1[5]&&num2[3]==num1[0]&&num2[4]==num1[3]&&num2[5]==num1[1])cout<<"YES";
	else if(num2[0]==num1[1]&&num2[1]==num1[2]&&num2[2]==num1[0]&&num2[3]==num1[5]&&num2[4]==num1[3]&&num2[5]==num1[4])cout<<"YES";
	else if(num2[0]==num1[2]&&num2[1]==num1[4]&&num2[2]==num1[0]&&num2[3]==num1[5]&&num2[4]==num1[1]&&num2[5]==num1[3])cout<<"YES";
	else if(num2[0]==num1[4]&&num2[1]==num1[3]&&num2[2]==num1[0]&&num2[3]==num1[5]&&num2[4]==num1[2]&&num2[5]==num1[1])cout<<"YES";
	else if(num2[0]==num1[3]&&num2[1]==num1[1]&&num2[2]==num1[0]&&num2[3]==num1[5]&&num2[4]==num1[4]&&num2[5]==num1[2])cout<<"YES";
	else if(num2[0]==num1[0]&&num2[1]==num1[2]&&num2[2]==num1[4]&&num2[3]==num1[1]&&num2[4]==num1[3]&&num2[5]==num1[5])cout<<"YES";
	else if(num2[0]==num1[2]&&num2[1]==num1[5]&&num2[2]==num1[4]&&num2[3]==num1[1]&&num2[4]==num1[0]&&num2[5]==num1[3])cout<<"YES";
	else if(num2[0]==num1[5]&&num2[1]==num1[3]&&num2[2]==num1[4]&&num2[3]==num1[1]&&num2[4]==num1[2]&&num2[5]==num1[0])cout<<"YES";
	else if(num2[0]==num1[3]&&num2[1]==num1[0]&&num2[2]==num1[4]&&num2[3]==num1[1]&&num2[4]==num1[5]&&num2[5]==num1[2])cout<<"YES";
	else if(num2[0]==num1[2]&&num2[1]==num1[0]&&num2[2]==num1[1]&&num2[3]==num1[4]&&num2[4]==num1[5]&&num2[5]==num1[3])cout<<"YES";
	else if(num2[0]==num1[0]&&num2[1]==num1[3]&&num2[2]==num1[1]&&num2[3]==num1[4]&&num2[4]==num1[2]&&num2[5]==num1[5])cout<<"YES";
	else if(num2[0]==num1[3]&&num2[1]==num1[5]&&num2[2]==num1[1]&&num2[3]==num1[4]&&num2[4]==num1[0]&&num2[5]==num1[2])cout<<"YES";
	else if(num2[0]==num1[5]&&num2[1]==num1[2]&&num2[2]==num1[1]&&num2[3]==num1[4]&&num2[4]==num1[3]&&num2[5]==num1[0])cout<<"YES";
	else cout<<"NO"; 
	return 0; 
}
