#include<stdio.h>

int main(){
	int a,b,c,flower;
	a=1;b=0;c=0;
	
	for(a=1;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
			 flower=a*100+b*10+c;
			 if(flower==(a*a*a+b*b*b+c*c*c))
			 printf("%d\n",flower);	
			}
		}
		
	}
	
	return 0;
}
