#include<iostream>
using namespace std;
int main()
{
	bool b;
	int n;
	cout<<"Enter Array Size"<<endl;
	cin>>n;
	int arr[n],j=0,item,t;
	do
	{
		b=true;
		cout<<"Press i for insertion and Press d for deletion and Press t for traversal"<<endl;
		cout<<"Press any key for exit"<<endl;
		cout<<"enter your choice"<<endl;
		char ch;
		cin>>ch;
		switch(ch)
		{
			case 'i':
				if(j>=5) cout<<"Overflow"<<endl; 
				else
				{
					cout<<"Enter the element"<<endl;
					cin>>item;
					arr[j]=item;
					j++;
				}
				break;
			case 'd':
				if(j<=0) cout<<"Underflow"<<endl;
				else j--;
				break;
			case 't':
				t=0;
				while(t<j)
				{
					cout<<arr[t++]<<"\t";
				}cout<<endl;
				break;
			default:
				b=false;
				
		}
	}while(b);
	return 0;
}
