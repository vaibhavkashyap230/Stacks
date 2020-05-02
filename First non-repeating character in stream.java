// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream/0

import java.util.*;
import java.io.*;

class GFG
{
	public static void main (String[] args)
	{
	    Scanner s = new Scanner(System.in);
	    int test = s.nextInt();
	    while(test-->0)
	    {
	        int n = s.nextInt();
	        char a[] = new char[n];
	        for(int i=0;i<n;i++)
	        {
	            String temp = s.next();
	            a[i] = temp.charAt(0);
	        }
	        int count[] = new int[26];
	        Queue<Character> q = new LinkedList<Character>();
	        for(int i=0;i<n;i++)
	        {
	            count[(int)(a[i]-'a')]+=1;
	            if(count[(int)(a[i]-'a')]==1)
	            {
	                q.add(a[i]);
	                System.out.print(q.peek()+" ");
	            }
	            else
	            {
	                while(q.isEmpty()==false && count[(int)(q.peek()-'a')]!=1)
	                {
	                    q.poll();
	                }
	                if(q.isEmpty())
	                {
	                	System.out.print(-1+" ");
	                }
	                else
	                {
	                	System.out.print(q.peek()+" ");
	                }
	            }
	        }
	        System.out.println();
	    }
	    s.close();
	}
}