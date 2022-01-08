#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
	if(n==1) return; 
	for(int i=0;i<n-1;i++)
	{
	if(arr[i]>arr[i+1])
	{
		swap(arr[i],arr[i+1]);
	}
	}
	
	  bubblesort(arr,n-1);
}
int main()
{
	int arr[11]={90,-8,105,0,1,20,0,1,-105,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int index=0;
	bubblesort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	//insertionsort(arr,n,index);
	//selectionsort(arr,n,index);
	
	return 0;
}
