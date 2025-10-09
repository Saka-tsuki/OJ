#include<stdio.h>

int main(){
	int n,i,count,num,index;
	count=1;num=0;
	scanf("%d",&n);
	int res[n];
	
	for(i=0;i<n;i++){
		res[i]=1;
	}
	
	i=0;
	while(i<n){
		if(res[i]==1 && count==3){
			res[i]=0;
			count=1;
			num++;
		}
		if(res[i]==1 && count!=3){
			count++;
		}
		if(num==n-1)
			break;
		if(i==n-1)
			i=0;
		else
			i++;
	}
	for(i=0;i<n;i++){
		if(res[i]==1){
			index=i;
			break;
		}
	}
	printf("%d",index+1);
	
	return 0;
}
