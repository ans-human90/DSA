#include <iostream>
#include <vector>
#include <set>
#include <iterator>
#include <deque>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    // // Method 1: (Using multiset)
    // multiset<int, greater<int>> s;
    // vector<int> ans;

    // for (int i = 0; i < k; i++)
    // {
    //     s.insert(a[i]);
    // }
    // ans.push_back(*s.begin());

    // for (int i = k; i < n; i++)
    // {
    //     s.erase(s.lower_bound(a[i - k]));
    //     s.insert(a[i]);
    //     ans.push_back(*s.begin());
    // }
    // // this method have order of: O(nlogn)

    // // Method 2: (Using deque)
    deque<int> q;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        while (!q.empty() and a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }

    ans.push_back(a[q.front()]);

    for (int i = k; i < n; i++)
    {
        if (q.front() == i - k)
        {
            q.pop_front();
        }

        while (!q.empty() and a[q.back()] < a[i])
        {
            q.pop_back();
        }

        q.push_back(i);

        ans.push_back(a[q.front()]);
    }
    // // this method have order of: O(n)

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
