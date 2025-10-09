#include<stdio.h>

void input();
void prosess(int res[]);
void output(int res[]); 

int main(){
	int res[10];
	input(res);
	prosess(res);
	output(res);
	
	return 0;
}

void input(int res[]){
	int i;
	
	for(i=0;i<10;i++){
		scanf("%d",&res[i]);
	}
	
}

void prosess(int res[]){
	int i,min,max,index_min,index_max,temp;
	min=res[0];max=res[9];
	
	for(i=0;i<10;i++){
		if(res[i]<min){
			min=res[i];
			index_min=i;	
		}
		if(res[i]>max){
			max=res[i];
			index_max=i;
		}
	}
	if(index_max==0){
		temp=res[0];
		res[0]=res[index_min];
		res[index_min]=temp;
		index_max=index_min;
		temp=res[9];res[9]=res[index_max];res[index_max]=temp;
	}
	else{
		temp=res[0];res[0]=res[index_min];res[index_min]=temp;
		temp=res[9];res[9]=res[index_max];res[index_max]=temp;
	}
}

void output(int res[]){
	int i;
	
	for(i=0;i<10;i++)
		printf("%d ",res[i]);	
}
