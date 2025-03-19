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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 1; i<= n; i++)
        {
            for (int j = n; j > 0; j--)
            {
                int pi = j;
                   
                if (i != j)
                {
                    if (j % k == i % k)
                    {
                        cout<<j<<" "<<i<<" "<<k<<"\n";
                        // cout<<j%k<<" "<<i%k<<" \n";
                        int flag=false;
                        for(int c:v){
                            if(c==j) flag=true;
                        }
                        
                        if(!flag){

                        v.push_back(j);
                        break;
                        }
                    }
                }
            }
        }

        if (v.size() != 0)
        {

            for (int val : v)
            {
                // cout << val << " ";
            }
            cout << "\n";
        }else{
            cout<<-1<<"\n";
        }
    }

    return 0;
}