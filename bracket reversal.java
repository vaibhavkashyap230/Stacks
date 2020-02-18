// https://classroom.codingninjas.com/app/classroom/me/1108/content/27972/offering/290426/problem/348

import java.util.Stack;
public class Solution
{	
	// Function returns -1 if brackets can't be balanced
    	private static int br(String s)
	{
		int c=0;
		Stack<Integer>st=new Stack<>();
		for(int i=0;i<s.length();i++)
		{
			if(s.charAt(i)=='{')
			{
				st.push(123);
			}
			else
			{
				if(!st.isEmpty())
				{
					st.pop();
				}
				else
				{
					c+=1;
				}
			}
		}
		
		int r=st.size();
		if(r%2==1)
		{
			r=(r/2)+1;
		}
		else
		{
			r=r/2;
		}
		return r+c;
	}
	public static int countBracketReversals(String s)
    {
        if(s.length()%2==1)
            return -1;
        
        if(s.length()==0)
            return 0;
        
        return br(s);   
	}
}