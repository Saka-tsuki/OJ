#include<iostream>
using namespace std;

int main()
{
	int num[3],temp,index,min;
	cin>>num[0]>>num[1]>>num[2];
	for(int i=0;i<3;i++)
	{
		min=num[i];
		index=i;
		for(int j=i;j<3;j++)
		{
			if(num[j]<min)
			{
				min=num[j];
				index=j;
			}
		}
		temp=num[i];
		num[i]=min;
		num[index]=temp;
	}
	
	for(int i=0;i<3;i++)
	{
		printf("%d ",num[i]);
	}
	return 0;
}
