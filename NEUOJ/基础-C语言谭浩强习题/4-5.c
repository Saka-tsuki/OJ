#include<stdio.h>

int main(){
	float i,a,b,c,temp;
	i=1;
	temp=0;
	
	scanf("%f %f %f",&a,&b,&c);
	
	while(i<=a){
		temp+=i;
		i++;
	}
	i=1;
	
	while(i<=b){
		temp+=i*i;
		i++;
	}
	i=1;
	
	while(i<=c){
		temp+=1/i;
		i++;
	}
	
	printf("%.2f",temp);
	
	return 0;
}
