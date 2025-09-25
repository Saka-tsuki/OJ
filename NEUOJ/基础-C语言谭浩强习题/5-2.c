#include<stdio.h>

int main(){
	int res[10];
	int num,i,len,min_res,j,index;
	i=0;
	while((scanf("%d",&num))==1){
		res[i]=num;
		i++;
		if(getchar()=='\n'){
			len=i;
			break;
		}
		
	}
	for(i=0;i<=len-1;i++){
		min_res=res[i];
		index=i; 
		for(j=i;j<=len-1;j++){
			if(res[j]<min_res){
				min_res=res[j];
				index=j;
			}
		}
		res[index]=res[i];
		res[i]=min_res;
	}
	for(i=0;i<=len-1;i++)
	printf("%d\n",res[i]);
	
	return 0;
} 
