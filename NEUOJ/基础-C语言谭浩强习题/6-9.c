#include<stdio.h>
#include<string.h>

int main(){
	char str[10000];
	int i,len,a,b,c,d;
	a=0;b=0;c=0;d=0; 
	
 	fgets(str, sizeof(str), stdin);
 	str[strcspn(str,"\n\r")] = '\0'; 
	len=strlen(str); 
	for(i=0;i<len;i++){
		if(str[i]>='A'&&str[i]<='Z' || str[i]>='a'&&str[i]<='z')
			a++;
		else if(str[i]>='0'&&str[i]<='9')
			b++;
		else if(str[i]==' ')
			c++;
		else{
			d++;
		}
	}
	
	printf("%d %d %d %d",a,b,c,d);
	
	return 0;
}
