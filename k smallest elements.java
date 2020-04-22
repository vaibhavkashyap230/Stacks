// https://classroom.codingninjas.com/app/classroom/me/1108/content/39587/offering/441155/problem/628

import java.util.*;

public class solution
{
	public static ArrayList<Integer> kSmallest(int[] a, int k)
    {
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>(Collections.reverseOrder());
        for(int i=0;i<k;i++)
        {
            pq.add(a[i]);
        }
        for(int i=k;i<a.length;i++)
        {
            if(pq.peek()>a[i])
            {
                pq.poll();
                pq.add(a[i]);
            }
        }
        ArrayList<Integer> r = new ArrayList<Integer>(k);
        for(int i=0;i<k;i++)
        {
            r.add(pq.poll());
        }
        return r;
	}
}