#include<stdio.h>
#include<string.h>

int main(){
	char str1[1000],str2[1000];
	int i,len1,len2;
	
	scanf("%s",&str1);
	scanf("%s",&str2);
	len1=strlen(str1);
	len2=strlen(str2);
	
	for(i=0;i<len1;i++){
		printf("%c",str1[i]);
	}
	for(i=0;i<len2;i++){
		printf("%c",str2[i]);
	}
	
	return 0;
}
