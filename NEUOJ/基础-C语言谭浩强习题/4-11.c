#include<stdio.h>
#include<math.h>

int main(){
	double a,x,i,temp;
	x=1;temp=0;	
	scanf("%lf",&a);
	for(i=1;i>0;i++){
		temp=0.5*(x+a/x);
		if(fabs(temp-x)<0.00001){
			break;
		}
		x=temp;
	}
	printf("%.3lf",temp);
	
	return 0;
}
