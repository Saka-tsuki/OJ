#include<stdio.h>

struct student{
	char num[10];
	char name[10];
	int a,b,c;
};

struct student input();
void print();

int main(){
	int n,i;
	scanf("%d",&n);
	struct student stu[n];
	
	for(i=0;i<n;i++){
		stu[i]=input();
	}
	for(i=0;i<n;i++){
		print(stu[i]);
	}

	return 0;
}

struct student input(){
	struct student stu;
	
	scanf("%s %s %d %d %d",&stu.num,&stu.name,&stu.a,&stu.b,&stu.c);
	return stu;
}

void print(struct student stu){
	printf("%s,%s,%d,%d,%d\n",stu.num,stu.name,stu.a,stu.b,stu.c);
}
