#include<stdio.h>
#include<string.h>
void judge(char str1[],char str2[]);

int main(){
	char str1[50],str2[50],str3[50];
	int i,j,len1,len2,len3;
	
	scanf("%s",&str1);
	scanf("%s",&str2);
	scanf("%s",&str3);	
	judge(str1,str2);
	judge(str2,str3);
	judge(str1,str2);

	printf("%s\n%s\n%s",str1,str2,str3);
	
	return 0;
}

void judge(char str1[],char str2[]){
	int i,j,len1,len2;
	char temp;
	
	len1=strlen(str1);
	len2=strlen(str2);
	for(i=0;i<len1;i++){
		if(str1[i]<str2[i])
			break;
		if(str2[i]<str1[i]){
			for(j=0;j<len1;j++){
				temp=str1[j];
				str1[j]=str2[j];
				str2[j]=temp;
			}
			break;
		}
	}
}
