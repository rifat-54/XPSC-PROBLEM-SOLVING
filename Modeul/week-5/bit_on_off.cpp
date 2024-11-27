#include <bits/stdc++.h>
using namespace std;
int check_kth_on_or_off(int n, int k)
{
    return (n >> k) & 1;
}

void print_on_and_off(int n)
{
    for (int k = 30; k >=0; k--)
    {
        if (check_kth_on_or_off(n, k))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}

int turn_on_kth_bit(int n,int k)
{
    return (n|(1<<k));
}
int turn_of_kth_bit(int n,int k)
{
    return(n&(~(1<<k)));
}

int toggle_kth_bit(int n,int k)
{
    return (n^(1<<k));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 45;
    int k = 4;
    //    cout<<((a>>k)&1)<<'\n';
    //   cout<<check_kth_on_or_off(a,k)<<'\n';
    // print_on_and_off(n);

    // cout<<turn_on_kth_bit(n,k)<<'\n';
    // cout<<turn_of_kth_bit(n,k)<<'\n';
       cout<<toggle_kth_bit(n,k)<<'\n';

    // cout<<00000001101<<'\n';

    return 0;
}