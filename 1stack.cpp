#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;
	s.push(3);
	s.push(2);
	s.pop();
	cout<<"Printing Top Element:-"<<s.top()<<endl;
	if(s.empty())
	{
	    cout<<"Stack is Empty"<<endl;	
	}
	else
	{
		cout<<"stack Is Not Empty"<<endl;
	}
}
