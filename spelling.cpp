#include<iostream>
using namespace std;

void spelling(int n,string str[])
{
	if(n==0) return;

		
	 spelling(n/10,str);
	 cout<<str[n%10]<<" ";
	 return;
}
int main()
{
	int n;
	cin>>n;
	std::string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	spelling(n,str);
	return 0;
}
