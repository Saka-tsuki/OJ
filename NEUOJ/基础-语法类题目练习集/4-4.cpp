#include<iostream>
using namespace std;

int main()
{
	long long n,num[10000],i;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	
	long long max,min,sum;
	max=num[0];min=num[0];sum=0;
	for(i=0;i<n;i++)
	{
		sum+=num[i];
		if(num[i]>max)max=num[i];
		else if(num[i]<min)min=num[i];
	}
	cout<<min<<" "<<max<<" "<<sum<<endl;
	
	return 0;
}
