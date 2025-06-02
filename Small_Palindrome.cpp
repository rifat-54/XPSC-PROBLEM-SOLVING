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
    int x,y;
    cin>>x>>y;

    // type 1 solve

    // int mid=x/2;
    // for (int i = 0; i < mid; i++)
    // {
    //     cout<<1;
    // }
    // for (int i = 0; i < y; i++)
    // {
    //     cout<<2;
    // }
    // for (int i = 0; i < mid; i++)
    // {
    //     cout<<1;
    // }
    // cout<<"\n";


    // type 2 solve

    int n=x+y;
    int l=0,r=n-1;
    vector<int>ans(n);

    while (x>0 && l<=r)
    {
        ans[l]=1;
        ans[r]=1;
        l++;r--;
        x-=2;
    }

    while (l<=r && y>0)
    {
        ans[l]=2;
        ans[r]=2;
        l++;r--;
        y-=2;
    }

    for(int val:ans) cout<<val;
    cout<<"\n";
    
    
    
    
   }
    
     
     
    return 0;
}