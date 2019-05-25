#include<stdio.h>
#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
};

node *head=NULL;

void push(int x)
{
	node *temp=new node();
	temp->data=x;
	temp->next=head;
	head=temp;
}

void pop()
{
	if(head==NULL)
	{
		cout<<"The stack is empty.";
		return;
	}
	node *temp=head;
	head=temp->next;
	delete temp;
}

void print()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
	cout<<"Stack : ";
	print();
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
	pop();
	print();
	cout<<"Stack : ";
	pop();
	print();
	cout<<"Stack : ";
	pop();
	print();
	cout<<"Stack : ";
	pop();
	print();
}
