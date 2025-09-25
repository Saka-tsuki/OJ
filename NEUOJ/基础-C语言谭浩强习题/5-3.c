#include<stdio.h>

int main(){
	int line1[3],line2[3],line3[3];
	int num,i,sum1,sum2;
	i=0;
	while((scanf("%d",&num))==1){
		line1[i]=num;
		i++;
		if(getchar()=='\n'){
			break;
		}
	}
	i=0;
	while((scanf("%d",&num))==1){
		line2[i]=num;
		i++;
		if(getchar()=='\n'){
			break;
		}
	}
	i=0;
	while((scanf("%d",&num))==1){
		line3[i]=num;
		i++;
		if(getchar()=='\n'){
			break;
		}
	}
	sum1=line1[0]+line2[1]+line3[2];
	sum2=line1[2]+line2[1]+line3[0];
	printf("%d %d",sum1,sum2);
	
	return 0;
}
