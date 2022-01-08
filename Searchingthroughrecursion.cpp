#include<iostream>
using namespace std;

void LinearSearch(int arr[],int index,int size,int key)
{
	if(index>size)	
	return;
	
	if(arr[index]==key)
	{
		cout << ++index <<endl;
		return;
	}
	
	LinearSearch(arr,index+1,size,key);
	
}

void BinarySearch(int arr[],int start,int end,int key)
{
	if(start>end)
	return ;
	
	int mid=(start+end)/2;
	if(arr[mid]==key)
	{
		cout<<++mid<<endl;
		return;
	}
	
	if(arr[mid]<key) 
	BinarySearch(arr,mid+1,end,key);
	
	if(arr[mid]>key)
	 BinarySearch(arr,start,mid-1,key);
	
}

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,222};
	int size=10;
	int key=222;
	int start=0;
	
	LinearSearch(arr,start,size,key);
	BinarySearch(arr,start,size,key);
	return 0;
}
