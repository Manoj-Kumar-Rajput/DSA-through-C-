#include<iostream>
using namespace std;
int main()
{
	int front, rear,choice ,item;
	bool isvalid=true;
	int queue[5];
	front =-1;
	rear=-1;
	

do{
		cout<<"Press 1 for enqueu"<<endl;
		cout<<"Press 2 for dequeue"<<endl;
		cout<<"Press 3 for Display"<<endl;
		cout<<"Press any other for exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					if(front ==5)
					{
						front=-1;
						rear=-1;
						break;
					}
					
					if(rear>3)	
					{
						cout<<"Overflow"<<endl; 
						break;
					}
				
					else
					{
						cout<<"Enter the queue element"<<endl;
						cin>>item;
						rear++;
						front=0;
						queue[rear]=item;
						break;
					}
				}
			case 2:
				{
					if(front>5-1){
					  cout<<"Underflow"<<endl; break;
				}
					else front++;
					break;
				}
			case 3:
				{
					int i=0;
					if(front==5)
					{
						cout<<"Stack is empty";
						break;
					}
					else
					{
						i=front;
					while(i<=rear) 
					{
						cout<<queue[i]<<"\t";
						i++;
					}
					break;
				}
				}
			default:
				{
					isvalid=false;
				}
				
					
		}
	}while(isvalid);
	return 0;
}
