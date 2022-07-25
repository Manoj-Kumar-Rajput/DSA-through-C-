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
		int k;
		for(k=i+1;k<=2*i+1;k++)
		{
			cout<<k;
		}
		for(int j=k-2;j>i;j--)
		{
			cout<<j;
		}
		cout<<endl;
//		for(int )
	}
}
