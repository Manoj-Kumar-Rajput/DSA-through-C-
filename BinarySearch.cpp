#include<iostream>
using namespace std;
int main()
{
	int n,item,mid,lower,higher;
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
	lower=0;
	higher=n-1;
	while(lower<=higher)
	{
		mid=(lower+higher)/2;
		if(a[mid]==item)
		{	isfound=false;
			cout<<"Element is placed on "<<++mid<<" index"<<endl;
			break;
		}
		else if(a[mid]<item) lower=mid+1;
		else if(a[mid]>item) higher=mid;
	}
	if(isfound)
	{
		cout<<"Item is not found"<<endl;
	}
	
	
	return 0;
}
