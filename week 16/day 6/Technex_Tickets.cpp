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
    int a;
    cin>>a;
    stack<int> s;
    for (int i = a; i >0; i--)
    {
        s.push(i);
    }

    int ctn=0;
    while (!s.empty())
    {
        ctn++;
        if(s.top()==a) break;
        s.pop();
        if(!s.empty()){
        int t=s.top();
        s.pop();
        if(!s.empty()){
            if(s.top()==a) break;
            s.pop();
        }
            s.push(t);

        }


    }
    
        cout<<ctn<<"\n";
    
   }
    
     
     
    return 0;
}