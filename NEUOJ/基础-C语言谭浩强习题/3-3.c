#include<stdio.h>

int function(int x);

int main()
{	
	int x;
	char grade;
	scanf("%d",&x);
	grade=function(x);
	printf("%c",grade);
	
	return 0;
}

int function(int x)
{
	char grade;
	if(x>=90)
	grade='A';
	else if(x>=80 && x<90)
	grade='B';
	else if(x>=70 && x<80)
	grade='C';
	else if(x>=60 && x<70)
	grade='D';
	else if(x<60)
	grade='E';
	
	return grade;
}
