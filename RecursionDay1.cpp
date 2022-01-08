#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n);
int power(int n);
int counting(int n);
int revcounting(int n);

int main()
{
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	fact(n);
	power(n);
	counting(n);
	revcounting(n);
	return 0;
}
int  fact(int n)
{
	if(n==0) return 1;
	
	int answer= n*fact(n-1);
	cout<<"FActorial of "<<n<<" is"<<answer<<endl;
	return answer; 
}
int power(int n)
{
	if(n==0) return 1;
	
	int answer = 2*power(n-1);
	cout<<"Power of "<<n<<" is"<<answer<<endl;
	return answer;
}

int counting(int n)
{
	if(n==0) return 1;
	counting(n-1);
	cout<<n<<endl;
	return 1;
}

int revcounting(int n)
{
	if(n==0) return 0;
	
	cout<<n<<endl;
	revcounting(n-1);
	
}
