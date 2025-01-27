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
    int n,k;
    cin>>n>>k;
    list<int>l;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        l.push_back(a);
    }

    for (int i = 0; i < k; i++)
    {
        int fi=l.front();
        int se=l.back();
        int total=fi+se;
        l.pop_back();
        l.pop_front();
        l.push_back(total);
    }

    for(int val:l){
        cout<<val<<" ";
    }
    cout<<'\n';
    
    
   }
    
     
     
    return 0;
}