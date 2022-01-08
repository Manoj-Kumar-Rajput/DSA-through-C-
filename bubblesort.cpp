#include<iostream>
using namespace std;
int main()
{
	int n,temp;
	cout<<"Enter the array size"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the Array element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
	cout<<"Array Elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	
	for(int i=0;i<n;i++)
	{
		int flag=0;
		for(int j=0;j<(n-1)-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
			
		}
		if(flag==0) break;
	}
	
	
	cout<<"\nSorted Elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}
