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
     
    string s,t,p;
    cin>>s>>t;
    p=s;
    int ctn=0;
    vector<int>v;
    vector<int>a;
    bool ok=true;
    for (int i = 0; i < n; i++)
    {
        if(s[i]!=t[i] && i==0){
            ok=false;
            // cout<<i<<"\n";
            break;
        }

        if(s[i]!=t[i]){
            if(s[i-1]!='1'){
            ok=false;
            //  cout<<p[2]<<" "<<i<<"\n";
            break;
        }else{

            

            if(s[i]=='1'){
              a.push_back(i);
            }else{
               s[i]=t[i];
            v.push_back(i);
            }
            ctn++;
            // cout<<i<<" ";
        }
        }
    }

    sort(a.rbegin(),a.rend());
    for(int k:a){
        v.push_back(k);
    }

    if(!ok || ctn>(n*3)){
        cout<<-1<<"\n";
    }else{
        cout<<ctn<<"\n";
        if(ctn){
            for(int val:v){
                cout<<val<<" ";
            } 
            cout<<"\n";
        }
    }
    


   }
    
     
     
    return 0;
}