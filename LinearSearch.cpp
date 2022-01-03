#include<iostream>
using namespace std;
int main()
{
	int n,item;
	cout<<"Enter the Array Size"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the Array Element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Array Elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl<<"Enter the item which you want search the index in Array"<<endl;
	cin>>item;
	bool isfound=true;
	for(int i=0;i<n;i++)
	{
		if(a[i]==item)
		{	isfound=false;
			cout<<"Element is placed on "<<++i<<" index"<<endl;
			break;
		}
	}
	if(isfound)
	{
		cout<<"Item is not found"<<endl;
	}
	
	
	return 0;
}
