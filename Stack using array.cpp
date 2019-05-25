#include<stdio.h>
#include<iostream>

using namespace std;
int top=-1;
int a[10];

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
	if(top==9)
	return true;
	return false;
}

void pop()
{
	if(isEmpty())
	{
		cout<<"Stack is empty."<<endl;
		return;
	}
	top--;
}

int Top()
{
	return(top);
}

void print()
{
	for(int i=0;i<=top;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	cout<<"Top = "<<Top()<<endl;
	cout<<"Stack : ";
	push(0);
	print();
	cout<<"Stack : ";
	push(2);
	print();
	cout<<"Stack : ";
	push(4);
	print();
	cout<<"Stack : ";
	push(6);
	print();
	cout<<"Stack : ";
	pop();print();
	cout<<"Stack : ";
	pop();print();
	cout<<"Stack : ";
	pop();print();
	cout<<"Top = "<<Top()<<endl;
	return 0;
}
