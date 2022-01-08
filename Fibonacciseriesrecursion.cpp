#include<iostream>
using namespace std;

int fibonacci(int n)
{
	if(n<=0 ||n==1)	
	{
		return n;
	}
	int answer=fibonacci(n-1)+fibonacci(n-2);
	cout<<answer<<"\t";
}

int main()
{
	int n;
	cin>>n;
	fibonacci(n);
	
	return 0;
}
