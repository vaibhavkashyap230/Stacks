// https://classroom.codingninjas.com/app/classroom/me/1108/content/39587/offering/441156/problem/1651

import java.util.*;

public class Solution
{
	public static int buyTicket(int a[], int k)
    {
        Deque<Integer> dq = new LinkedList<Integer>();
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>(Collections.reverseOrder());
        for(int i=0;i<a.length;i++)
        {
            pq.add(a[i]);
            dq.addLast(i);
        }
        int t=0;
        boolean f = true;
        while(f)
        {
            if(pq.peek()==a[dq.peekFirst()])
            {
                if(dq.peekFirst()==k)
                {
                    f=false;
                }
                t+=1;
                dq.pollFirst();
                pq.poll();
            }
            else
            {
                dq.addLast(dq.pollFirst());
            }
            
        }
        return t;
	}
}