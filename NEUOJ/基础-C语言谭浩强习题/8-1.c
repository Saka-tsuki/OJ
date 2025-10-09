#include<stdio.h>

int main(){
	int x,y,z,temp;
	scanf("%d %d %d",&x,&y,&z);
	if(x>y){
		temp=y;
		y=x;
		x=temp;
	}
	if(y>z){
		temp=z;
		z=y;
		y=temp;
	}
	if(x>y){
		temp=y;
		y=x;
		x=temp;
	}
	
	printf("%d %d %d",x,y,z);
	
	return 0;
}
