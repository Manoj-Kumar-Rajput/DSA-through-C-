#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n*2-n;j++)
		{
			cout<<" ";
		}
		if(i<n-1 && i>1)
		{
			cout<<"1";
			for(int k=0;k<2*(i-1)+1;k++)
			{
			cout<<" ";
			}
			cout<<i+1;
		}
		else
		{
			for(int j=0;j<=i;j++)
			{
				cout<<j+1<<" ";
			}
		}
		cout<<endl;
	}
}
