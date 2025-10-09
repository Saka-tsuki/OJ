#include<iostream>
using namespace std;

int main()
{
	int x[3000],y[3000],i,count;
	count=1;
	for(i=0;i<3000;i++)
	{
		cin>>x[i]>>y[i];
		if(x[i]==0&&y[i]==0)
		{
			break;
		}
		count++;
	}
	for(i=0;i<count-1;i++)
	{
		if(x[i]<y[i])
		{
			cout<<x[i]<<" "<<y[i]<<"\n";
		}
		else
		{
			cout<<y[i]<<" "<<x[i]<<"\n";
		}
	}
	
	return 0;
}
