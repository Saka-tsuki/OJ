#include<stdio.h>

struct date{
	int year;
	int month;
	int day;
};

int main(){
	int year,month,day,res,i;
	res=0; 
	scanf("%d %d %d",&year,&month,&day);
	struct date x={year,month,day
	};
	
	if(x.month==1)printf("%d",x.day);
	
	else{
		for(i=1;i<x.month;i++){
			if(i==1)res+=31;
			else if(i==2){
				if((x.year%4==0 && x.year%100!=0) || x.year%400==0)res+=29;
				else res+=28;
			}
			else if(i==3)res+=31;
			else if(i==4)res+=30;
			else if(i==5)res+=31;
			else if(i==6)res+=30;
			else if(i==7)res+=31;
			else if(i==8)res+=31;
			else if(i==9)res+=30;
			else if(i==10)res+=31;
			else if(i==11)res+=30;
		}
		res+=x.day;
		printf("%d",res);
	}
	
	return 0;
}
