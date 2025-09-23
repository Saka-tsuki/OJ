#include<stdio.h>
#include <string.h>

int main()
{
	int i,len;
	i=0;
	char num[5];
	
	scanf("%s",&num);
	len=strlen(num);
	printf("%d\n",len);
	
	while(i<len)
	{	if(i<len-1) 
		printf("%c ",num[i]);
		else if(i=len-1)
		printf("%c\n",num[i]);
		i++;
	}
	
	i=len-1;
	
	while(i<=len-1 && i>=0)
	{
		printf("%c",num[i]);
		i--;
	}
	
	return 0;
 } 
