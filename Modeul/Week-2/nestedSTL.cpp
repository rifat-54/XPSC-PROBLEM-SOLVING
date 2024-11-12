#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<vector<int>, int> mp;
    vector<int> a;
    a.push_back(3);
    a.push_back(2);
    a.push_back(5);
    a.push_back(4);
    mp[a] = 7;

    for (auto [x, y] : mp)
    {
        for (int value : x)
        {
            cout << value << " ";
        }
        cout << '\n';
        cout << y<<'\n';
    }

    return 0;
}