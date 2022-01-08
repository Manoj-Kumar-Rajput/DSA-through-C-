#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
	struct Node *pre;
};
struct Node *Start= NULL; 
struct Node *temp, *new1;

int insertion();
int deletion();
void  traversal();
int main()
{
	int choice;
	bool  isvalid=true;
	while(isvalid)
	{
		cout<<"Press 1 for insertion"<<endl;
		cout<<"Press 2 for deletion"<<endl;
		cout<<"Press 3 for traversal"<<endl;
		cout<<"Press any key for exit....."<<endl;
		cin>>choice;
		if(choice ==1) insertion();
		else if(choice == 2) deletion();
		else if(choice ==3) traversal();
		else isvalid=false; 
	}
 	return 0;
 }
 int insertion()
{
 	int item;
 	cout<<"Enter the item"<<endl;
 	cin>>item;
 	temp=Start;
 	new1= (struct Node*)new(struct Node);
 	new1->data=item;
 	new1->next=NULL;
 	new1->pre=NULL;
 	if(temp==NULL) Start=new1;
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new1;
		new1->pre=temp->next;
		
	}
	return 0;
 }
 
 	int deletion()
 	{
 		temp=Start;
 	if(Start==NULL) cout<<"list is empty"<<endl;
	else if(temp->next==NULL)  Start=NULL;
 	else
 	{
 		while(temp->next->next!=NULL)
 		{
 			temp=temp->next;
		 }
		 temp->next=NULL;
	 }
	 return 0;
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
	 	cout<<"Doubly Linkedlist elements :"<<endl;
	 	while(temp->next!=NULL)
	 	{
	 		
	 		cout<<temp->pre<<"\t"<<temp->data<<"\t"<<temp->next<<"\t";
	 		temp=temp->next;
		 }
		 cout<<temp->pre<<"\t"<<temp->data<<"\t"<<temp->next<<endl;
	 }
 }

