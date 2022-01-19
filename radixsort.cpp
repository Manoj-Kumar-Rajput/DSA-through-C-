#include<iostream>
using namespace std;

void radixSort(int a[], int n, int pos)
{
	int max=10; //its the radix count max value(0-9)
	int count[max]={0};	
	int b[n]={0};	//using second array for storing sorted array digit wise. 
	
	//in this we increament the count on index
	for(int i=0;i<n;i++)
	{
		++count[(a[i]/pos)%10];
	}
	
	// we assign index where elements will be placed
	for(int i=1;i<=max;i++)
	{
		count[i]+=count[i-1];
	}
	
//in this section, we assign the elements to b array as considered as index of count 
	for(int i=n-1;i>=0;i--)
	{
		b[--count[(a[i]/pos)%10]]=a[i];
	}
	
	//shift all the elements b to a array
	for(int i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	return ;
}
int main()
{
	int n,k=0;
	cout<<"Enter the Array size"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the Array Element"<<endl;
	
	for(int i=0;i<n;i++)
	{
		
		cin>>a[i];
	}
	//find max element ;	
	for(int i=0;i<n-1;i++)
	{
		if(k<a[i+1])
		{
			k=a[i];
		}
	}
	
	//call the  radix sort function
	for(int pos=1;k/pos>0;pos=pos+10)
	{
		radixSort(a,n,pos);
	}
	
	//print the sorted array
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	 return 0;
}
