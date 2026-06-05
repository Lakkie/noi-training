#include<iostream>
using namespace std;
int main()
{
	int n,a[7],b[1002][12],sum=0,c[10];
	// ‰»Î 
	cin>>n;
	for(int i=1;i<=7;i++)
	{
		cin>>a[i];	
	} 
	for(int k=1;k<=n;k++)
	{
		for(int j=1;j<=7;j++)
		{
			cin>>b[k][j];
		}
	}
	int ccc=0;
	//º∆À„ 
	for(int k=1;k<=n;k++)
	{
		sum=0;
		for(int j=1;j<=7;j++)
		{
			for(int i=1;i<=7;i++)
			{
				if(a[i]==b[k][j]) sum++;
			}
		}
		c[sum]++;
	}
	// ‰≥ˆ
	for(int i=7;i>=1;i--)
	{
		cout<<c[i]<<" ";
	} 
	return 0;
}

