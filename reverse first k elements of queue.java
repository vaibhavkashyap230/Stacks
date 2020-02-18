// https://classroom.codingninjas.com/app/classroom/me/1108/content/27973/offering/290450/problem/2244


import java.util.*;
public class Solution
{
	public static Queue<Integer> reverseKElements(Queue<Integer> q,int k)
    {
        Stack<Integer>st=new Stack<>();
        for(int i=0;i<k;i++)
        {
            st.push(q.remove());
        }
        Queue<Integer>nq=new LinkedList<Integer>();
        while(q.size()!=0)
        {
            nq.add(q.remove());
        }
        while(!st.isEmpty())
        {
            q.add(st.pop());
        }
        while(nq.size()!=0)
        {
            q.add(nq.remove());
        }
        return q;
	}
}