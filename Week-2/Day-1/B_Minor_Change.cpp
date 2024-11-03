#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    int ctn = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            ctn++;
        }
    }
    cout << ctn << endl;

    return 0;
}