#include <iostream>
#include <queue>
using namespace std;

class stack
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    stack()
    {
        N = 0;
    }

    void push(int val)
    {
        q1.push(val);
        N++;
    }

    void pop()
    {
        if (q1.empty())
        {
            return;
        }

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int top()
    {
        if (q1.empty())
        {
            return -1;
        }

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);
        q1.pop();

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
    } // here we could have used back() function from queue (to get the top of the stack)

    int size()
    {
        return N;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.size() << endl;

    return 0;
}
