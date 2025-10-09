#include<stdio.h>

struct student{
	char num[10];
	char name[10];
	int a,b,c;
};

int main(){
	int n,i,j,res_a,res_b,res_c,avg[3],index,max;
	res_a=0;res_b=0;res_c=0;max=0;
	scanf("%d",&n);
	struct student stu[n];
	int score[n];
	
	for(i=0;i<n;i++){
		scanf("%s %s %d %d %d",&stu[i].num,&stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c);
	}
	for(i=0;i<n;i++){
		res_a+=stu[i].a;
		res_b+=stu[i].b;
		res_c+=stu[i].c;
	}
	avg[0]=res_a/n;
	avg[1]=res_b/n;
	avg[2]=res_c/n;
	
	for(i=0;i<n;i++){
		score[i]=stu[i].a+stu[i].b+stu[i].c;
	}
	for(i=0;i<n;i++){
		if(score[i]>max){
			max=score[i];
			index=i;
		}
	}
	printf("%d %d %d\n",avg[0],avg[1],avg[2]);
	printf("%s %s %d %d %d",stu[index].num,stu[index].name,stu[index].a,stu[index].b,stu[index].c);
	
	return 0;
}
