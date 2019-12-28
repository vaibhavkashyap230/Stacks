#include<stdio.h>
#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>dq;
	cout<<"Is empty : "<<dq.empty()<<endl;
	dq.push_back(3);
	dq.push_back(4);
	dq.push_front(2);
	dq.push_front(1);
	dq.push_back(5);
	cout<<"Size of deque : "<<dq.size()<<endl;
	cout<<"Is empty : "<<dq.empty()<<endl;
	cout<<"At front : "<<dq.front()<<" "<<"At back : "<<dq.back()<<endl;
	cout<<"Second : "<<dq.at(1)<<" Second Last : "<<dq.at(3)<<endl;
	dq.pop_front();
	dq.pop_back();
	cout<<"After pop_front : "<<dq.front()<<" After pop_back : "<<dq.back()<<endl;
	dq.clear();
	cout<<"Is empty : "<<dq.empty()<<endl;
	return(0);
}
