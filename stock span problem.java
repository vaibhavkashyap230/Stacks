// https://classroom.codingninjas.com/app/classroom/me/1108/content/27972/offering/290426/problem/86

import java.util.Stack;
public class Solution
{
	private static int[] ss(int a[])
	{
		int r[]=new int[a.length];
		Stack<Integer>st=new Stack<Integer>();
		r[0]=1;
		st.push(0);
		
		for(int i=1;i<r.length;i++)
		{
				while(st.isEmpty()==false && a[st.peek()]<a[i])
				{
					st.pop();
				}
                
				if(st.isEmpty())
				{
					r[i]=i+1;
				}
				else
				{
					r[i]=i-st.peek();
				}
				st.push(i);
		}
		return r;
	}
	public static int[] stockSpan(int[] price)
    {
        return ss(price);
	}
}