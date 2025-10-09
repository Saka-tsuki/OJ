#include<stdio.h>
#include<string.h>

int main(){
	char str[1000];
	int i,len;
	
	scanf("%s",&str);
	len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		printf("%c",str[i]);
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		printf("%c",str[i]+32);
	}
	
	return 0;
}
