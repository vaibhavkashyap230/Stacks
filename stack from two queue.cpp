/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
    q1.push(x);
}
/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
    if(q1.empty())
    {
        return -1;
    }
    int e=q1.size();
    for(int i=0;i<e-1;i++)
    {
        q2.push(q1.front());
        q1.pop();
    }
    int tbr=q1.front();
    q1.pop();
    while(!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }
    return tbr;
}
