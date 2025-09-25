#include<stdio.h>

int main(){
	long long n,f,i,num,res,y,factors1[100],factors2[100];
	
	scanf("%lld",&n);
	for(i=2;i<=n;i++){
		num=0;res=1;
		for(f=2;f*f<=i;f++){
			 if(i%f == 0){
				factors1[num]=f;
				factors2[num]=(i/f);
				res+=f; 
				res+=(i/f);
				num++;
			}
			if(res>i)
			break;
		}
		if(i==res){
		
		printf("%lld its factors are ",i);
		printf("1 ");
		for(y=0;y<num;y++){
			printf("%lld ",factors1[y]);
		}
		for(y=num-1;y>=0;y--){
			if(y>0)
			printf("%lld ",factors2[y]);
			else if(y==0)
			printf("%lld\n",factors2[y]);
		}
		}
		
	}
	return 0;
}
