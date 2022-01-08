#include<iostream>
using namespace std;
 
 bool isSorted(int arr[],int size)
 {
 	if(size==1 || size==0)
 	return true;

 	if(arr[0]>arr[1])
 	return false;
 	 	
 	isSorted(arr+1,size-1);
 	
 }
 
 
 int main()
 {
 	int arr[5]={4,5,6,4,5};
 	int size=5;
 	bool issorted=isSorted(arr,size);
 	if(issorted)
 	{
 		cout<<"Sorted"<<endl;
	}
	 else
	 cout<<"Unsorted"<<endl;
	 return 0;
 }
