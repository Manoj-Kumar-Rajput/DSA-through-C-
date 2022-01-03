#include<iostream>
using namespace std;
int main()
{
	int row,col,row1,col1,i,j,k;
	
	cout<<"Enter the row size and column size of Array A"<<endl;
	cin>>row>>col;
	cout<<"Enter the row size and column size of Array B"<<endl;
	cin>>row1>>col1;
	if(row1!=col)   cout<<"Multiplication is not possible"<<endl;
	else
	{
	int a[row][col],b[row1][col1];
	int product[row][col1]={0};
	cout<<"Enter the Matrix Elements of A"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the Matrix Elements of B"<<endl;
	for( i=0;i<row1;i++)
	{
		for( j=0;j<col1;j++)
		{
			cin>>b[i][j];
		}
	}
	
	cout<<"After Multiply A and B"<<endl;
	
	for( i=0;i<row;i++)
	{
		for(j=0;j<col1;j++)
		{
			product[i][j]={0};
			for(k=0;k<row1;k++)
			{
			product[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	for(i=0;i<row;i++)
	{
		for(j=0;j<col1;j++)
		{
			cout<<product[i][j]<<"\t";
		}
		cout<<endl;
	}
	}
		
	return 0;
	
}
