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
   map<int,int>mp;
     int n;
     cin>>n;
        for (int i =1; i <= n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }

        priority_queue<int>pq;
        for(auto [x,y]:mp)
        {
            pq.push(y);
        }

        while (!pq.empty())
        {
            if(pq.size()<2)
            {
                break;
            }
            int a=pq.top();
            pq.pop();
            a--;
            int b=pq.top();
            pq.pop();
            b--;
            if(a>0)
            pq.push(a);
            if(b>0)
            pq.push(b);
        }

        int ctn=0;
        while (!pq.empty())
        {
            ctn=ctn+pq.top();
            pq.pop();
        }

        cout<<ctn<<'\n';
        
        
        
   }
    
     
     
    return 0;
}