// https://classroom.codingninjas.com/app/classroom/me/1108/content/39587/offering/441156/problem/1640

public class Solution
{
    private static boolean check(int a[],int i)
    {
        if(i>=a.length)
            return true;
        
        int d=2*i;
        if(d+1<a.length && a[d+1]>a[i])
            return false;
        if(d+2<a.length && a[d+2]>a[i])
            return false;
        
        return check(a,d+1) && check(a,d+2);
    }
	public static boolean checkMaxHeap(int a[])
    {
        return check(a,0);
	}
}