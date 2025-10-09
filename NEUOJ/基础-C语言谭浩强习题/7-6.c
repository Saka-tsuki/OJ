#include<stdio.h>
#define MAX(a,b,c)((a>b && a>c)? (printf("%.3f",a)):((b>c)? (printf("%.3f",b)):(printf("%.3f",c))))

void max(float a,float b,float c);

int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	max(a,b,c);
	MAX(a,b,c);
	
	return 0;
}

void max(float a,float b,float c){
	if(a>b && a>c)
		printf("%.3f\n",a);
	else if(b>c)
		printf("%.3f\n",b);
	else
		printf("%.3f\n",c);
}
