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
     long long n;
     cin>>n;
     deque<long long >q;
     for (int i = 0; i <= __lg(n); i++)
     {
        if((n>>i)&1){
            long long value=n-(1LL<<i);
            if(value>0)
            q.push_front(value);
        }
     }
     q.push_back(n);
     cout<<q.size()<<"\n";
     for(long long v:q){
        cout<<v<<" ";
     }
     cout<<'\n';
     
   }
    
     
     
    return 0;
}