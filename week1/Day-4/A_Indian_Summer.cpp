#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n;
   cin>>n;
   vector<pair<string,string>>v;
   int ctn=0;
   for (int i = 0; i < n; i++)
   {
        string t,l;
        cin>>t>>l;
        if(!v.empty()){
            pair<string,string> value={t,l};
            auto it=find(v.begin(),v.end(),value);
            if(it!=v.end()){
                continue;
            }else{
                ctn++;
            }
            v.push_back({t,l});

        }else{

        v.push_back({t,l});
        ctn++;
        }
   }

  cout<<ctn<<endl;

    
     
     
    return 0;
}