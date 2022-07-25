#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		if(i<n && i>1)
		{   int j;
			cout<<"1";
			for(j=3;j<=i;j++)
			{
				cout<<" ";
			}
			cout<<j-1;
		}
		if(i==n || i==1)
		{
			for(int k=1;k<=i;k++)
			{
				cout<<k;
			}
		}
		cout<<endl;
	}
		
}
