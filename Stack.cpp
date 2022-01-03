#include<iostream>
using namespace std;
int main()
{
	int top,n,choice,item;
	top=-1;
	cout<<"Enter the stack size"<<endl;
	cin>>n;
	bool isvalid=true;
	int stack[n];
	do{
		cout<<"Press 1 for push"<<endl;
		cout<<"Press 2 for pop"<<endl;
		cout<<"Press 3 for Display"<<endl;
		cout<<"Press any other for exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					if(top>n-2)	
					{
						cout<<"Overflow"<<endl; 
						break;
					}
					else
					{
						cout<<"Enter the stack element"<<endl;
						cin>>item;
						top++;
						stack[top]=item;
						break;
					}
				}
			case 2:
				{
					if(top==-1){
					  cout<<"Underflow"<<endl; break;
				}
					else top--;
					break;
				}
			case 3:
				{
					int i=0;
					if(top==-1)
					{
						cout<<"Stack is empty";
						break;
					}
					else
					{
					while(i<=top) 
					{
						cout<<stack[i]<<"\t";
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
