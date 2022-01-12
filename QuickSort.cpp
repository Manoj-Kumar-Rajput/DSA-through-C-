#include<iostream>
using namespace std;

int partition(int arr[],int start,int end)
{
	int pivot=arr[start];
	int i=start;
	int j=end;
	int count =0;
	int j1=1;
	
	//isme hame pivot element ka sahi index nikalna h
	while(j1<=end)
	{
		if(arr[j1]<=pivot)
		{
			count++;
		}
	j1++; 
	}
	int index=count;
	swap(arr[index],arr[start]);
	
	//isme hum pivot ke left side chhote aur right side bade element rakh rhe h
	
	while(i<index && j>index)
	{
		while(arr[i]<pivot) 
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		} 
		if(i<index && j>index)
		{
			swap(arr[i++],arr[j--]);
		}
		
	}
	return index;
}
void quickSort(int arr[],int start,int end)
{
	if(start>end) return;
	
	
	int pivot=partition(arr,start,end);
	quickSort(arr, start, pivot-1);
	quickSort(arr, pivot+1, end);
}

int main()
{
	int arr[6]={90,-8,6,115,0,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,n-1);
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<"\t";
	}
	
	return 0;
}
