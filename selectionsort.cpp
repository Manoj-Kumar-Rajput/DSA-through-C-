#include<iostream>
using namespace std;

void selectionsort(int arr[],int index,int n)
{
	if(index==n-1) return;
	
	int mid=index;
	int i=mid+1;
	while(i<n)
	{
		if(arr[i]<arr[mid])	mid=i;
		i++;	
	}
	swap(arr[index],arr[mid]);
	selectionsort(arr,index+1,n);
}

int main()
{
	int arr[11]={90,-8,105,0,1,20,0,1,-105,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,0,n);
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<"\t";
	}
	
	return 0;
}
