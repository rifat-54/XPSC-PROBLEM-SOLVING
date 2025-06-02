#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while(t--){
    
    vector<int>v(5);
    int total=0;

    for (int i = 0; i < 5; i++)
    {
        int x;
        cin>>x;
        v[i]=x;
        total+=x;
    }
    
    if(total>=35){
        cout<<0<<"\n";
    }else{
       
       int need=0;
       sort(v.begin(),v.end());

       for (int i = 0; i < 5 && total<35; i++)
       {
            total+=(10-v[i]);
            need++;
       }

       cout<<need*100<<"\n";
       

    }
   } 
     
     
    return 0;
}