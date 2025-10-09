#include<stdio.h>
#include<string.h>

int main(){
	char str[1000],character;
	int i,len;
	
	fgets(str,sizeof(str),stdin);
	len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]>='a' && str[i]<='z'){
		character=((str[i]-'a'+1)%26)+'a';
		str[i]=character;
		}
	}
	for(i=0;i<len;i++){
		printf("%c",str[i]);
	}
	
	return 0;
}
