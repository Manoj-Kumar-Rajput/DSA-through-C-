#include<iostream>
using namespace std;

int main()
{
	bool isvalid=true;
	int rear,front,n,choice,item;
	rear=front=-1;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int queue[n];
	
	do{
		cout<<"Press 1 for enqueue"<<endl;
		cout<<"Press 2 for dequeue"<<endl;
		cout<<"Press 3 for Display"<<endl;
		cout<<"Press any other for exit"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				{
					if((rear==n-1 && front==0) ||(front!=0 && rear==(front-1)%(n-1)))
					{
						cout<<"Overflow condition occur"<<endl;
					}
					else if(front ==-1)
					{
						front = rear=0;
						cout<<"Enter the item"<<endl;
						cin>>item;
						queue[rear]=item;
					
					}
					else if(front !=0 && rear==n-1)
					{
						rear=0;
						cout<<"Enter the item"<<endl;
						cin>>item;
						queue[rear]=item;
						
					}
					else
					{
						cout<<"Enter the item"<<endl;
						cin>>item;
						
						rear++;
						queue[rear]=item;
						
					}
					
					break;
				}
			case 2:
				{
					if(front==-1)
					{
						cout<<"underflow condition occurs"<<endl;
					}	
					else if(front==n-1)
					{
						front=0;
					}
					else if(front==rear)
					{
						front=rear=-1;
					}
					else
					{
						front++;
					}
					break;
				}
			case 3:
				{
					if(front==-1)
					{
						cout<<"List is empty"<<endl;
					}
					else if(front<=rear)
					{
						for(int i=front; i<=rear;i++)
						{
							cout<<queue[i]<<"\t";
						}
						cout<<endl;
					}
					else
					{
						for(int i=front; i<n;i++)
						{
							cout<<queue[i]<<"\t";
						}
						for(int i=0; i<=rear;i++)
						{
							cout<<queue[i]<<"\t";
						}
						cout<<endl;
					}
					break;
				}
				
			default: isvalid=false;
				
		}
	}while(isvalid);
	return 0;
}
