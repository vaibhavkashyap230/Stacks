#include<stdio.h>
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    string s;
	    cin>>s;
	    stack<int>st;
	    int c=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='(')
	        {
	            cout<<++c<<" ";
	            st.push(c);
	        }
	        if(s[i]==')')
	        {
	            cout<<st.top()<<" ";
	            st.pop();
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
