#include<stdio.h>

int main(){
	double m,n,res,i;
	
	scanf("%lf %lf",&m,&n);
	for(i=1;i<=n;i++){
		if(i==1)
		res+=m;
		else if(i>1){
			res+=(m*2);
		}
		m=m/2.0;
	}
	printf("%.2lf %.2lf",m,res);
	
	return 0;
}
