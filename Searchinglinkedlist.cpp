#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};

struct Node *Start=NULL;
struct Node *temp,*new1;

void create(int item)
{
	new1=(struct Node*) new (struct Node);
	new1->data=item;
	new1->next=NULL;
	if(Start==NULL) Start=new1;
	else
	{
		temp=Start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new1;
	}
}

void search(int item)
{
	int size=0;
	if(Start==NULL) cout<<"LIst is empty"<<endl;
	else
	{
		temp=Start;
		if(temp->next==NULL)
		{
			if(temp->data==item) cout<<"item is placed on "<<++size<<endl;
			else cout<<"item not found"<<endl;
		}
		else
		{
			int flag=0;
			while(temp->next!=NULL)
			{
			++size;
			if(temp->data==item) 
			{
				flag==1;
				cout<<"item is placed on "<<size<<endl;
				break;
			}
			else temp=temp->next;
			}
			if(flag==0) cout<<"item is not found"<<endl;

		}
				
	}
}
void traversal()
 {
 	temp=Start;
 	if(temp==NULL)
 	{
 		cout<<"List is empty"<<endl;
	 }
	 else
	 {
	 	cout<<"Linkedlist elements :"<<endl;
	 	while(temp->next!=NULL)
	 	{
	 		cout<<temp->data<<"\t";
	 		temp=temp->next;
		 }
		 cout<<temp->data<<endl;
	 }
 }

int main()
{
	int choice,item;
	bool isvalid=true;
	while(isvalid)
	{
		cout<<"Press 1 for create a linkedlist"<<endl;
		cout<<"Press 2 for search the index of element in linked list"<<endl;
		cout<<"Press 3 for traversal"<<endl;
		cout<<"Press any key for exit....."<<endl;
		cin>>choice;
		if(choice ==1)
		{
			cout<<"Enter the item"<<endl;
			cin>>item;
			create(item);
		 }   
		else if(choice == 2)
		{
			cout<<"Enter the item which you want search"<<endl;
			cin>>item;
			search(item);
		 } 
		 else if(choice ==3) traversal();
		 else isvalid=false;
		
	}
}
