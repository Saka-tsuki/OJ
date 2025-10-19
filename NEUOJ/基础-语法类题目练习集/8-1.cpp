#include<iostream>
using namespace std;

int main(){
	char str[1200];
	fgets(str,sizeof(str),stdin);
	int i;
	
	for(i=0;i<1200;i++){
		if(str[i]=='\0')break;
		else if(str[i]>='A' && str[i]<='Z')str[i]+=32;
		else if(str[i]>='a' && str[i]<='z')str[i]-=32;
		cout<<str[i];
	}
	
	return 0;
}
