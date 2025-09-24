#include<stdio.h>

struct Result
{
	int character,num,space,other;
 } ;

struct Result culculate(char input[])
 {	struct Result res={0,0,0,0};
	int i;
	i=0;
	 
 	while(input[i]!='\n')
 	{
 		if((input[i]>='a' && input[i]<='z') || (input[i]>='A' && input[i]<='Z'))
 		res.character++;
 		else if(input[i]>='0' && input[i]<='9')
 		res.num++;
 		else if(input[i]==' ')
 		res.space++;
 		else
 		res.other++;
 		
 		i++;
	 }
 	
 	return res;
 }
 
 int main()
 {
 	char input[100];
 	
 	fgets(input, sizeof(input), stdin);
 	struct Result res=culculate(input);
 	printf("%d %d %d %d",res.character,res.num,res.space,res.other);
 	
 	return 0;
 }
