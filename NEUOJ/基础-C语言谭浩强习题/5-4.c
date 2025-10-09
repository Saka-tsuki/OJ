#include<stdio.h>

int main(){
	int res[100],new_res[100];
	int num,i,len,n,temp;
	i=0;
	while((scanf("%d",&num))==1){
		res[i]=num;
		i++;
		if(getchar()=='\n'){
			len=i;
			break;
		}
	}
	scanf("%d",&n);
	res[i]=n;len++;
	for(i=len-1;i>0;i--){
		if(res[i]<res[i-1]){
			temp=res[i-1];
			res[i-1]=res[i];
			res[i]=temp;
		}
	}
	for(i=0;i<len;i++){
		printf("%d\n",res[i]);
	}
	return 0;
}
