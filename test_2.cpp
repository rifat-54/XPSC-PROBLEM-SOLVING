#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    int n;
    cin>>n;
    int maxbit=__lg(n);
    cout<<n<<"  maxbit-> "<<maxbit<<'\n';
    for (int i = 0; i <= maxbit; i++)
    {
        if((n>>i)&1){
            cout<<1<<" ";
        }else{
             cout<<0<<" ";
        }
    }

//    cout<< (5 & (1 << 2));
    
     
     
    return 0;
}