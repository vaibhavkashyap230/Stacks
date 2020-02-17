import java.util.Stack;

public class solution
{	
	private static boolean check(String s)
	{
		if(s.length()==0)
			return false;
		
		Stack<Integer>st=new Stack<Integer>();
		for(int i=0;i<s.length();i++)
		{
			if(s.charAt(i)!=')')
				st.push((int)(s.charAt(i)));
			else
			{
				int c=0;
				while(st.isEmpty()!=true && (int)(st.peek())!=40)
				{
					c+=1;
					st.pop();
				}
                if(!st.isEmpty())
                {st.pop();}
				if(c==0)
				{
					return true;
				}
			}
		}
		
		return false;
	}
	public static boolean checkRedundantBrackets(String s)
    {
        return check(s);
	}
}