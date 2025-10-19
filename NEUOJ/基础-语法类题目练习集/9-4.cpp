#include<iostream>
#include<string>
using namespace std;

int main(){
	int q,a,b,i,j,count,x;
	string str,order,re;
	char temp;
	cin>>str>>q;
	
	for(i=0;i<q;i++){
		cin>>order;
		if(order=="print"){
			cin>>a>>b;
			for(j=a;j<=b;j++){
				cout<<str[j];
			}
			cout<<"\n";
		}
		if(order=="reverse"){
			cin>>a>>b;
			x=a;
			for(j=b;j>(a+b)/2;j--){
				temp=str[j];
				str[j]=str[x];
				str[x]=temp;
				x++;
			}
		}
		if(order=="replace"){
			count=0;
			cin>>a>>b>>re;
			for(j=a;j<=b;j++){
				str[j]=re[count];
				count++;
			}
		}
	}
	
	return 0;
}
