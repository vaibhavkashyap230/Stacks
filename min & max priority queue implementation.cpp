#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of elements to put in the list : ";
	cin>>n;
	priority_queue<int>max_pq;
	priority_queue<int,vector<int>, greater<int>> min_pq;
	cout<<"MAX_Priority_Queue is empty : "<<max_pq.empty()<<endl;
	cout<<"MIN_Priority_Queue is empty : "<<min_pq.empty()<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<"th number : ";
		int d;
		cin>>d;
		min_pq.push(d);
		max_pq.push(d);
		cout<<endl;
	}
	cout<<"Size of MAX_Priority_Queue is : "<<max_pq.size()<<endl;
	cout<<"Size of MIN_Priority_Queue is : "<<min_pq.size()<<endl;
	cout<<"Contents of MAX_Priority_Queue : "<<endl;
	while(!max_pq.empty())
	{
		cout<<max_pq.top()<<" ";
		max_pq.pop();
	}
	cout<<endl<<"Contents of MIN_Priority_Queue : "<<endl;
	while(!min_pq.empty())
	{
		cout<<min_pq.top()<<" ";
		min_pq.pop();
	}
	cout<<endl;
	cout<<"MAX_Priority_Queue is empty : "<<max_pq.empty()<<endl;
	cout<<"MIN_Priority_Queue is empty : "<<min_pq.empty()<<endl;
	return(0);
}
