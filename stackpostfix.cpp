#include<iostream>
#include<stack>
using namespace std;


string postfix(stack<char> bracket,string expression)
{
	string result="";
	for(int i=0;i<expression.length();i++)
	{
		char c=expression.at(i);
		
		// taking opening bracket 
		if(expression.at(i)=='{' || expression.at(i)=='(' || expression.at(i)=='[')
		{
			bracket.push(c);
		}
		 // taking closing bracket
		else if(expression.at(i)=='}' || expression.at(i)==')' || expression.at(i)==']')
		{
			if(bracket.size()==0)		return "Bracket Error";
			
			else if(bracket.size()!=0)
			{
				while(bracket.top()!='(' && bracket.top()!='[' &&
				 bracket.top()!='{')
				{
					result+=bracket.top();
					bracket.pop();
				}
				if(c==']' && bracket.top()=='[')  bracket.pop();
				
				else if(c=='}' && bracket.top()=='{')  bracket.pop();
				
				else if(c==')' && bracket.top()=='(')  bracket.pop();
				else return "bracket Error";

			}
		}
		
		// in this if there is concept of operator precedency and also taking operator
		else if(expression.at(i)=='+' || expression.at(i)=='-' || expression.at(i)=='/'
				|| expression.at(i)=='*')
			{
				if(bracket.size()==0)
				{
					bracket.push(c);
				}
				else
				{
					switch(c)
					{
						case '+':
							{
							if(bracket.top()=='*' || bracket.top()=='/' || bracket.top()=='+'
								|| bracket.top()=='-')
								{
									char top=bracket.top();
									result+=top;
									bracket.pop();
									bracket.push(c);							
								}
								else
								{
									bracket.push(c);
								}
								break;
							}
							case '-':
							{
							if(bracket.top()=='*' || bracket.top()=='/' || bracket.top()=='+'
								|| bracket.top()=='-')
								{
									char top=bracket.top();
									result+=top;
									bracket.pop();
									bracket.push(c);							
								}
								else
								{
									bracket.push(c);
								}
								break;
							}
							case '*':
							{
							if(bracket.top()=='*' || bracket.top()=='/')
								{
									char top=bracket.top();
									result+=top;
									bracket.pop();
									bracket.push(c);							
								}
								else
								{
									bracket.push(c);
								}
								break;
							}
							case '/':
							{
							if(bracket.top()=='*' || bracket.top()=='/')
								{
									char top=bracket.top();
									result+=top;
									bracket.pop();
									bracket.push(c);							
								}
								else
								{
									bracket.push(c);
								}
								break;
							}
					}
				}
			}
			///in this loop  we take characters 
		else
		{
			result+=c;
		}
	}
	
	// in this,we shift all operator in bracket to our result 
	while(bracket.size()!=0)
	{
		if(bracket.top()=='{' || bracket.top()=='(' || bracket.top()=='[')
		{
			return "bracket Error";
		}
		else
		{
		char top=bracket.top();
		result+=top;
		bracket.pop();

		}
	}
	return result;
}

int main()
{
	stack<char> bracket;
	string expression;
	cout<<"Enter the expression"<<endl;
	cin>>expression;
	cout<<postfix(bracket,expression)<<endl;
	return 0;
}
