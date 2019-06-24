#include<stdio.h>
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    string s;
	    cin>>s;
	    stack<char>st;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
	        st.push(s[i]);
	        else if(s[i]==')' || s[i]==']' || s[i]=='}')
	        {
	            if(st.empty()==1)
	            {
	                cout<<"not balanced"<<endl;
	                break;
	            }
	            else if(s[i]==')')
	            {
	                if(st.top()=='(')
	                st.pop();
	                else
	                {
	                    cout<<"not balanced"<<endl;
	                    break;
	                }
	            }
	            else if(s[i]==']')
	            {
	                if(st.top()=='[')
	                st.pop();
	                else
	                {
	                    cout<<"not balanced"<<endl;
	                    break;
	                }
	            }
	            else if(s[i]=='}')
	            {
	                if(st.top()=='{')
	                st.pop();
	                else
	                {
	                    cout<<"not balanced"<<endl;
	                    break;
	                }
	            }
	        }
	        if(i==s.length()-1)
	        {
	            if(st.empty()==1)
	    cout<<"balanced"<<endl;
	    else
	    cout<<"not balanced"<<endl;
	        }
	    }
	}
	return 0;
}
