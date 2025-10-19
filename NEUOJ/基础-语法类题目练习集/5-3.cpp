#include<iostream>
using namespace std;

int main()
{
	int h[100],w[100],i,j,q,count;
	count=0;
	for(i=0;i<100;i++)
	{
		cin>>h[i]>>w[i];
		if(h[i]==0 && w[i]==0)break;
		count++;
	}
	
	for(i=0;i<count;i++)
	{
		for(j=0;j<h[i];j++)
		{
			for(q=0;q<w[i];q++)
			{
				if(j%2==0 && q%2==0)cout<<"#";
				else if(j%2==0 && q%2==1)cout<<".";
				else if(j%2==1 && q%2==0)cout<<".";
				else if(j%2==1 && q%2==1)cout<<"#";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	
	return 0;
}
