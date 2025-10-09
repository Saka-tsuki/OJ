#include<iostream>
using namespace std;

int main()
{
	int x[10000],i,count;
	count=1;
	for(i=0;i<10000;i++)
	{
		cin>>x[i];
		if(x[i]==0)
		{
			break;
		}
		count++;
	}
	for(i=0;i<count-1;i++)
	{
		cout<<"Case "<<i+1<<": "<<x[i]<<"\n";
	}
	
	return 0;
}
