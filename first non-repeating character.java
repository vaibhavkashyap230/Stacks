// https://classroom.codingninjas.com/app/classroom/me/1108/content/28752/offering/300156/problem/5800

import java.util.*;

class Solution
{
    public static String nonrep(String s)
    {
        String r="";
        Queue<Integer>q = new LinkedList<Integer>();
        int a[] = new int[26];
        q.add(s.charAt(0)-'a');
        a[s.charAt(0)-'a']+=1;
        System.out.print(s.charAt(0));
        for(int i=1;i<s.length();i++)
        {
            if(a[s.charAt(i)-'a']==0)
            {
                q.add(s.charAt(i)-'a');
            }
            a[s.charAt(i)-'a']+=1;
            while(q.size()>0 && a[q.peek()]>1)
            {
                q.remove();
            }
            if(q.size()<1)
            {
                System.out.print(-1);
            }
            else
            {
                System.out.print((char)(q.peek()+'a'));
            }
        }
        return r;
    }
}
