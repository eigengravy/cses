#include <bits/stdc++.h>

using namespace std;

int main()
{
    int max = 1, cur = 0;
    string s;
    getline(cin, s);
    char prev = s[0];
    for (auto x : s)
    {
        cur = (x == prev) ? cur + 1 : 1;
        if (cur > max)
            max = cur;
        prev = x;
    }
    cout << max << endl;
}
