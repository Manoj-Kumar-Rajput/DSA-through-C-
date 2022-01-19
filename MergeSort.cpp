#include<iostream>
using namespace std;

void mergeAll(int arr[],int start,int end,int mid)
{

	int len1= mid-start+1;
	int len2= end-mid;
	int *arr1= new int[len1];
	int *arr2= new int[len2];
	int main=start;
	for(int i=0;i<len1;i++)
	{
		arr1[i]=arr[main++];
	}	
	main=mid+1;
	for(int k=0;k<len2;k++)
	{
		arr2[k]=arr[main++];
	}
	int mainindex=start;
	int k1=0;
	int j=0;
	while(k1<len1 && j<len2)
	{
		if(arr1[k1]<arr2[j])
		{
			arr[mainindex++]=arr1[k1++];
		}
		
		else
		{
			arr[mainindex++]=arr2[j++];
		}
		
	}
	while(k1<len1)
	{
		arr[mainindex++]=arr1[k1++];
	}
	while(j<len2)
	{
		arr[mainindex++]=arr2[j++];
	}
	delete []arr1;
	delete []arr2;
	
}

void mergeSort(int arr[],int start,int end)
{
	if(start>=end) return;
	
	// isme hamne mid nikala
	int mid=start+(end-start)/2;
	
	
	//ab left side recursion call kiya
	mergeSort(arr,start,mid);
	
	
	
	//ab right side recursion call kiya
	mergeSort(arr,mid+1,end);
	
	
	
	// ab hum elements ko sort karenge
	mergeAll(arr,start,end,mid);
	
}

int main()
{
	int arr[6]={90,-8,6,-115,0,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}cout<<endl;
	return 0;
}
