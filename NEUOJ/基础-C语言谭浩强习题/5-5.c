#include<stdio.h>

int main(){
	int n,res[10],i,len;
	i=0;
	while((scanf("%d",&n))==1){
		res[i]=n;
		i++;
		if(getchar()=='\n'){
			len=i;
			break;
		}
	}
	for(i=len-1;i>=0;i--){
		printf("%d ",res[i]);
	}
	return 0;
}
