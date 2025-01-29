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
    string s;
    cin>>s;
    string a="ADVITIYA";
    

    int total=0;

    for (int i = 0; i < 8; i++)
    {
        if(s[i]!=a[i]){
            // cout<<s[i]<<'\n';
            int aa=s[i];
            int bb=a[i];
            if(bb>aa){
                total=total+(bb-aa);
            }else{

            
            int f='Z'-s[i];
            int l=a[i]-'A';
            int d=(f+l);
            total+=d;
            total++;
            }
        }
    }

    cout<<total<<'\n';
    

   }
    
     
     
    return 0;
}