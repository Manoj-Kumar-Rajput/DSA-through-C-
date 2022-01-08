#include<iostream>
using namespace std;

void insertionsort(int arr[],int index,int n)
{
	if(index==n) return;
	
	int i=index-1;
	int temp=arr[index];
	while(i>=0 &&(arr[i]>temp))
	{
	
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=temp;
	insertionsort(arr,index+1,n);
}

int main()
{
	int arr[6]={5,4,3,2,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,1,n);
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<"\t";
	}
	
	return 0;
}
