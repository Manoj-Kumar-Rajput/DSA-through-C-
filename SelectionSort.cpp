#include<iostream>
using namespace std;
int main()
{
	int n,temp,mid;
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
		temp=i;
		mid=a[i];
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[temp]) temp=j;
		}
		a[i]=a[temp];
		a[temp]=mid;
	}
	
	
	cout<<"\nSorted Elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}
