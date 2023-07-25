#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long moves = 0;
    long long prev = 0;
    for (auto i = 0; i < n; i++)
    {
        long long cur;
        cin >> cur;
        if (cur < prev)
        {
            moves += (prev - cur);
        }
        else
        {
            prev = cur;
        }
    }
    cout << moves << endl;
}