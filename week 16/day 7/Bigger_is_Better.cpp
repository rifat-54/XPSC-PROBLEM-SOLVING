#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;

    // cout<<s[0]<<"\n";

    string p;

    bool flag=false;

    for (int i = 0; i < n; i++)
    {
        int num=int(s[i]);
        int a ='z';
        if(num-a!=0){
            p.push_back(char(num+1));
            flag =true;
            break;
        }{
            p.push_back('z');
        }

        // cout<<num<<" "<<a<<"\n";
    }

    
    for (int i = 0; i < n-1; i++)
    {
        p.push_back('z');
    }

    if(flag){
        for(char c:p){
        cout<<c;
      }
    }else{
        cout<<-1;
    }

    
    cout<<"\n";
    
    
   } 
     
     
    return 0;
}