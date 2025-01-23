#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int even=0,odd=0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            if(a%2==0){
                even++;
            }else{
                odd++;
            }
        }

        cout<<max(even,odd)<<'\n';
        
    }
    
     
     
    return 0;
}