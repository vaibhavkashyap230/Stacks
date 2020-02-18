// https://classroom.codingninjas.com/app/classroom/me/1108/content/27973/offering/290450/problem/420

import java.util.*;
public class reverse_queue
{
	public static void reverseQueue(Queue<Integer> q)
    {
        if(q.size()==0)
            return;
        
        int temp=q.dequeue();
        reverseQueue(q);
        q.enqueue(temp);
	}
}