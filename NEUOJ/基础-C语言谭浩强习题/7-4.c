#define LEAP_YEAR(y)(((y)%400==0 && (y)%4==0)? (printf("L")) : (printf("N"))) 
#include<stdio.h>

int main(){
	int y;
	scanf("%d",&y);
	LEAP_YEAR(y);
	
	return 0;
}
