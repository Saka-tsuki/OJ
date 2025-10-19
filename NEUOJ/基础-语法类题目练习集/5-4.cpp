#include<iostream>
using namespace std;

int main(){
	int x,i,n;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		x=i;
		if(x%3==0)
		{
			cout<<i<<" ";
			continue;
		}
		while(x!=0)
		{
			if(x%10==3)
			{
				cout<<i<<" ";
				break;
			}
			else
			{
				x/=10;
			}
		}
	}
	
	return 0;
}
