// https://practice.geeksforgeeks.org/problems/next-larger-element/0

import java.util.*;
import java.io.*;

class GFG
{
	public static void main (String[] args) throws IOException
	{
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	int test = Integer.parseInt(br.readLine());
    	while(test-->0)
    	{
    		int n = Integer.parseInt(br.readLine());
    		long a[] = new long[n];
    		String str = br.readLine();
    		String input[] = str.split(" ");
    		for(int i=0;i<n;i++)
    		{
    			a[i] = Long.parseLong(input[i]);
    		}
    		Stack<Integer> st = new Stack<Integer>();
    		long res[] = new long[n];
    		for(int i=0;i<n;i++)
    		{
    			if(st.isEmpty())
    			{
    				st.push(i);
    			}
    			else if(a[i]>a[st.peek()])
    			{
    				while(st.isEmpty()==false && a[i]>a[st.peek()])
    				{
    					res[st.peek()] = a[i];
    					st.pop();
    				}
    				st.push(i);
    			}
    			else
    			{
    				st.push(i);
    			}
    		}
    		while(!st.isEmpty())
    		{
    			res[st.peek()] = -1;
    			st.pop();
    		}
    		for(Long i : res)
    		{
    			System.out.print(i+" ");
    		}
    		System.out.println();
    	}
    	br.close();
	}
}
