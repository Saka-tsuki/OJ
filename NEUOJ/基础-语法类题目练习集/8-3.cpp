#include<iostream>
#include<string> 
using namespace std;

int main(){
	int i,n;
	int ch[26]={0};
	string s;
	while(getline(cin,s)){
		n=s.size();
		for(i=0;i<n;i++){
			if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
			ch[s[i]-'a']++;
		}
	}
	for(i=0;i<26;i++){
		printf("%c : %d\n",'a'+i,ch[i]);
	}
	return 0;
}
