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
    string s,t;
    cin>>s>>t;
    for (int i = 0; i < n-1; i++)
    {
        if(t[i]=='0' & t[i+1]=='0'){
            if(s[i]=='1' & s[i+1]=='1'){
                s[i]='0';
                s[i+1]='0';

            }else if(s[i]=='0' & s[i+1]=='0'){
                continue;


            }else if(s[i]=='0' & s[i+1]=='1'){
                continue;

            }else{
                swap(s[i],s[i+1]);
            }

        }else if(t[i]=='1' & t[i+1]=='1'){
            if(s[i]=='1' & s[i+1]=='1'){
                continue;

            }else if(s[i]=='0' & s[i+1]=='0'){
                s[i]='1';
                s[i+1]='1';

            }else if(s[i]=='0' & s[i+1]=='1'){
                swap(s[i],s[i+1]);

            }else{
                continue;
            }

        }else if(t[i]=='0' & t[i+1]=='1'){
            if(s[i]=='1' & s[i+1]=='1'){
                s[i]='0';
                s[i+1]='0';

            }else if(s[i]=='0' & s[i+1]=='0'){
                continue;

            }else if(s[i]=='0' & s[i+1]=='1'){
                continue;

            }else{
                swap(s[i],s[i+1]);

            }

        }else{
            if(s[i]=='1' & s[i+1]=='1'){
                continue;

            }else if(s[i]=='0' & s[i+1]=='0'){
                s[i]='1';
                s[i+1]='1';

            }else if(s[i]=='0' & s[i+1]=='1'){
                swap(s[i],s[i+1]);

            }else{
                continue;

            }

        }
    }
    if(s==t) cout<<"YES\n";
    else cout<<"NO\n";
    
   }
    
     
     
    return 0;
}