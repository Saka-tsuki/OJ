#include<iostream>
using namespace std;

int main()
{
	int a,b,count,res[1000],i;
	count=0;
	char op;
	for(i=0;i<1000;i++)
	{
		cin>>a>>op>>b;
		if(op=='+')
		{
			res[i]=a+b;
			count++;
		}
		else if(op=='-')
		{
			res[i]=a-b;
			count++;
		}
		else if(op=='*')
		{
			res[i]=a*b;
			count++;
		}
		else if(op=='/')
		{
			res[i]=a/b;
			count++;
		}
		else if(op=='?')
		{
			break;
		}
	}
	for(i=0;i<count;i++)
	{
		cout<<res[i]<<"\n";
	}
	
	return 0;
}
