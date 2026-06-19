class MyQueue
{
public:
    stack<int> inp, out;
    MyQueue()
    {
    }

    void push(int x)
    {
        inp.push(x);
    }

    int pop()
    {
        peek();
        int ans = out.top();
        out.pop();
        return ans;
    }

    int peek()
    {
        if (out.empty())
        {
            while (!inp.empty())
            {
                out.push(inp.top());
                inp.pop();
            }
        }
        return out.top();
    }

    bool empty()
    {
        return inp.empty() && out.empty();
    }
};
