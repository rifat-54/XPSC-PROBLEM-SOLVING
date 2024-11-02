#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        if (a > b)
        {
            sum += a;
            a--;
        }else if(b>a){
            sum+=b;
            b--;
        }else{
            if(i==0){
            sum=a*2;
            break;

            }
            else sum=sum+a;
            
        }
    }
    cout<<sum<<"\n";

    return 0;
}