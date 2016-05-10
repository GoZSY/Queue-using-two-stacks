/*******************************************************************
一个用来入队，一个用来出队，出队的时候注意stack2空了之后再从stack1取数
同时需要注意stack2取不到数为空的情况
********************************************************************/
class Solution
{
public:
    void push(int node) 
    {
        stack1.push(node);
    }

    int pop() 
    {
        if(stack2.empty())
        {
            while(!stack1.empty())
            {
              stack2.push(stack1.top());
              stack1.pop();
            }
        }
        if(stack2.empty())
        {
           return 0;
        }
        int temp =  stack2.top();
        stack2.pop();
        return temp;
           
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
