#include<stdio.h>

int main(){
	char num[4];
	int i;
	
	scanf("%s",&num);
	for(i=0;i<4;i++){
		printf("%c ",num[i]);
	}
	
	return 0;
}
