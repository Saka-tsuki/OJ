#include<stdio.h>

char trans(char input[])
{
	int i=0;
	while(input[i]!='\0')
	{	
		if(input[i]>='A' && input[i]<='Z')
		{
			input[i]=(input[i]-'A'+4)%26+'A';
		}
		if(input[i]>='a' && input[i]<='z')
		{
			input[i]=(input[i]-'a'+4)%26+'a';
		}
		
		i++;
	}
	return input[100];
}

int main()
{
	char input[100];
	scanf("%s",input);
	trans(input);
	printf("%s",input);
	return 0;
}

