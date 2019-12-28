#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,r;
	    cin>>n>>r;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    if(r==1)
	    {
	        for(int i=0;i<n;i++)
	        {
	            cout<<a[i]<<" ";
	        }
	        cout<<endl;
	        continue;
	    }
	    stack<int>st;
	    int d=0;
	    for(int i=1;i<r-1;i++)
	    {
	        if(a[i]>a[d])
	        d=i;
	    }
	    st.push(d);
	    for(int i=r-1;i<n;i++)
	    {
	        if(st.top()>i-r)
	        {
	            if(a[st.top()]>a[i])
	            cout<<a[st.top()]<<" ";
	            else
	            {
	                st.pop();
	                st.push(i);
	                cout<<a[i]<<" ";
	            }
	        }
	        else
	        {
	            st.pop();
	            d=-1;
	            for(int j=i-r+1;j<=i;j++)
	            {
	                if(a[j]>d)
	                {d=a[j];
	                st.push(j);}
	            }
	            cout<<d<<" ";
	        }
	    }
	    cout<<endl;
	}
	return (0);
}
