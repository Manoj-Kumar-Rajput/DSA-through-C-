#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number";
	cin>>n;
	string str2="Vickki";
	string str="beta";
	int len=str.length();
	for(int row=0;row<n;row++)
	{
		for(int i=row*len;i<len*n-1;i++){cout<<" ";}
		if(row==0){cout<<str;}
		else
		{
			if(row==n-1)
			{
				
				for(int i=0;i<1;i++)
				{
				cout<<str;
				for(int j=0;j<=(n-2)*len;j++){cout<<" ";}
				if(i==0)
				{
					cout<<str2;
					for(int j=0;j<=(n-2)*len-str2.length();j++){cout<<" ";}
					cout<<str;
				}
				}
			
			}
			else
			{
				for(int i=0;i<2;i++)
				{
				cout<<str;
				for(int j=0;j<(2*row*len-len);j++){cout<<" ";}
				}
			
			}
			
		}
		
		
		cout<<endl;
	}
	for(int row=1;row<n;row++)
	{
		for(int i=0;i<=row*len+2;i++){cout<<" ";}
		if(row==n-1){cout<<str;}
		else
		{
			for(int i=0;i<2;i++)
			{
				cout<<str;
				for(int j=len;j<2*(n-(row+1))*len;j++){cout<<" ";}
			}
		}
		cout<<endl;
	}
	
	
	return 0;
}
