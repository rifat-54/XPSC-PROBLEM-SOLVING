#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
//    priority_queue<int>pq;
    priority_queue<int,vector<int>,greater<int>>pq;
   int n;
   cin>>n;
   for (int  i = 0; i < n; i++)
   {
    int x;
    cin>>x;
    pq.push(x);
   }

   cout<<pq.top()<<'\n';
   pq.pop();
   cout<<pq.top()<<'\n';
   pq.pop();
    cout<<pq.top()<<'\n';
    cout<<pq.size()<<'\n';
    cout<<pq.empty()<<'\n';

    while (!pq.empty())
    {
        int value=pq.top();
        pq.pop();
        cout<<value<<'\n';
    }

    cout<<"size -> "<<pq.size();
    
   
    
     
     
    return 0;
}