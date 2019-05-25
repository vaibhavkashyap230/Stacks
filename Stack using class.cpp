#include<stdio.h>
#include<iostream>
#define n 10
using namespace std;

class stack
{
	int a[n];
	int top;
	
	public:
		stack()
		{
			top=-1;
		}
		void push(int x)
		{
			if(top==9)
			{
				cout<<"The stack is full.";
				return;
			}
			a[++top]=x;
		}
		bool isEmpty()
		{
			if(top==-1)
			return 1;
			return 0;
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
			return top;
		}
		void print()
		{
			for(int i=0;i<=top;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
}a;

int main()
{
	cout<<"Top = "<<a.Top()<<endl;
	cout<<"Stack : ";
	a.push(0);
	a.print();
	cout<<"Stack : ";
	a.push(2);
	a.print();
	cout<<"Stack : ";
	a.push(4);
	a.print();
	cout<<"Stack : ";
	a.push(6);
	a.print();
	cout<<"Stack : ";
	a.pop();
	a.print();
	cout<<"Stack : ";
	a.pop();
	a.print();
	cout<<"Stack : ";
	a.pop();
	a.print();
	cout<<"Top = "<<a.Top()<<endl;
	return 0;
}
