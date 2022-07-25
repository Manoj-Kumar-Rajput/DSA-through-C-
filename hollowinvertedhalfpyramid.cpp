#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i<=1 || i==n)
		{
			for(int j=i;j<=n;j++)
			{
				cout<<j;
			}
		}
		else
		{
			cout<<i;
			for(int j=i;j<=n-2;j++)
			{
				cout<<" ";
			}
			cout<<n;
		}
		cout<<endl;
	}
}
