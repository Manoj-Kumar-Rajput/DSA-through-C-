#include<iostream>
using namespace std;
int main()
{
	int n;
	string str="Rahul";
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(int row=0;row<n;row++)
	{
		for(int col=row*str.length();col<=n*str.length()-str.length();col++)
		{
			cout<<" ";
		}
		cout<<str;
		for(int col=0;col<row;col++)
		{
			for(int col=0;col<str.length();col++)
			{
			cout<<" ";
			}
			cout<<str;
		}
		cout<<endl;
	}
	for(int row=n-1;row>0;row--)
	{
		for(int col=row*str.length();col<=n*str.length();col++)
		{
			cout<<" ";
		}
		cout<<str;
		
		for(int col=1;col<row;col++)
		{
			for(int col=1;col<str.length();col++)
			{	
			cout<<" ";
			}
			cout<<str;
		}
		
		cout<<endl;
	}
	return 0;
}
