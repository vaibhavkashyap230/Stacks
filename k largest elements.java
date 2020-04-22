// https://classroom.codingninjas.com/app/classroom/me/1108/content/39587/offering/441153/problem/1638

import java.util.*;

public class Solution
{
	public static ArrayList<Integer> kLargest(int a[], int k)
    {
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
        for(int i=0;i<k;i++)
        {
            pq.add(a[i]);
        }
        for(int i=k;i<a.length;i++)
        {
            if(a[i]>pq.peek())
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