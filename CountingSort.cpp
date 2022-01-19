#include <iostream>
using namespace std;

void countingSort(int a[],int n, int k)
{
	int b[n];
	int count[k+1]={0};
	
	//increament count through data value you also say that "data as a index"
	for(int i=0;i<=k;i++)
	{
		++count[a[i]];
	}
	
	// in this section, we specify the index where element is placed.
	for(int i=1;i<=k;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	
	//in this section, we sort the element through index;
	for(int i=n-1;i>=0;i--)
	{
		b[--count[a[i]]]=a[i];
	}
	
	//we all shift the element of b into a 
	for(int i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	
	return ;
}



int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int a[n];
	int k=0;
	cout<<"Enter the array element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	//find max element
	for(int i=0;i<n-1;i++)
	{
		if(k<a[i+1])
		{
			k=a[i];
		}
	}
	/// call counting sort algorithmn
	countingSort(a,n,k);
	
	// print the array element
	for(int i=0;i<n;i++)
	{
	
		cout<<a[i]<<"\t";
	}
	return 0;
}
