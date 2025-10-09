#include<stdio.h>

int main(){
	int n,m,i,p,j;
	scanf("%d %d",&n,&m);
	p=n+m;
	int num[p],score[p];
	for(i=0;i<p;i++){
		scanf("%d %d",&num[i],&score[i]);
	}
	int min,index,temp;
	for(i=0;i<p;i++){
		min=num[i];
		index=i;
		for(j=i;j<p;j++){
			if(num[j]<min){
				min=num[j];
				index=j; 
			}
		}
		temp=num[i];
		num[i]=min;
		num[index]=temp;
		temp=score[i];
		score[i]=score[index];
		score[index]=temp;
	}
	for(i=0;i<p;i++){
		printf("%d %d\n",num[i],score[i]);
	}
	
	return 0;
}
