#include<iostream>
using namespace std;

string revstr(string str,int i,string& cpy)
{
	if(i<0)
	return "";
	
	cpy+=str[i];
	cout<<str[i];
	
	revstr(str,i-1,cpy);
	return cpy;
}
int main()
{
	string str="MoM";
	int i=str.length()-1;
	string cpy="";
	cpy=revstr(str,i,cpy);
	cout<<endl;
	cout<<cpy<<endl;
	
	if(str==cpy) cout<<"Wow its pallindrome"<<endl;
	else cout<<"Not pallindrome"<<endl;
	return 0;
}
