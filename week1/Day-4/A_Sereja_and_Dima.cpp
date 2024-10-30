#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n;
   cin>>n;
   list<int>v;
   for (int i = 0; i < n; i++)
   {
        int x;
        cin>>x;
        v.push_back(x);
   }
    int s=0;
    int r=0;
//     sort(v.begin(),v.end());
   while (!v.empty())
   {
        if(v.front()>v.back()){
          s=s+v.front();
          v.pop_front();
        }else{
           s=s+v.back();
        v.pop_back();
        }
       
        if(v.empty()) break;

        if(v.front()>v.back()){
          r=r+v.front();
          v.pop_front();
        }else{
           r=r+v.back();
        v.pop_back();
        }

     //    r=r+v.back();
     //    v.pop_back();
   }

 cout<<s<<" "<<r<<endl;
   
    
     
     
    return 0;
}