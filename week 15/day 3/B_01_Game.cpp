#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int ctn = 0;

        while (1)
        {
            int len = s.length();
            int lctn=0;
            for (int i = 0; i < len; i++)
            {
                if (s[i] == '0' && s[i + 1] == '1')
                {   lctn++;
                    ctn++;
                    s.erase(i,2);
                    break;
                }
                else if (s[i] == '1' && s[i + 1] == '0')
                {
                    lctn++;
                    ctn++;
                    s.erase(i,2);
                    break;
                }
            }

            if(lctn==0){
                break;
            }

        }

        if (ctn % 2 == 0)
        {
            cout << "NET\n";
        }
        else
        {
            cout << "DA\n";
        }
    }

    return 0;
}