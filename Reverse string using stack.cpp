#include<stdio.h>
#include<iostream>
using namespace std;
#define n 20
class stack
{
	int top;
	int a[n];
	public:
		stack()
	    {  
		top=-1;
	    }
		bool isEmpty()
		{
			if(top==-1)
			return 1;
			return 0;
		}
		void push(int x)
		{
			if(top==19)
			{
				cout<<"The Stack is full."<<endl;
				return;
			}
			a[++top]=x;
		}
		void pop()
		{
			if(isEmpty())
			{
			cout<<"The stack is empty."<<endl;
			return;
		    }
			top--;
		}
		int Top()
		{
			return(a[top]);
		}
		void print()
		{
			for(int i=0;i<=top;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
};
int main()
{
	cout<<"Enter a string : ";
	string s;
	getline(cin,s);
	cout<<endl;
	stack a;
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		a.push(s[i]);
	}
	for(int i=0;i<l;i++)
	{
		s[i]=a.Top();
		a.pop();
	}
	cout<<"The reversed string is : "<<s<<endl;
}
