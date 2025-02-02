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
    string s;
    cin>>s;
    string a="RGB";
    string b="RBG";
    string c="GRB";
    string d="GBR";
    string e="BGR";
    string f="BRG";

    int ctn1=0;
    int ctn2=0;
    int ctn3=0;
    int ctn4=0;
    int ctn5=0;
    int ctn6=0;
   
   
   int j=0;
    for (int i = 0; i < n; i++)
    {
        if(a[j]!=s[i])  ctn1++;
        if(b[j]!=s[i])  ctn2++;
        if(c[j]!=s[i])  ctn3++;
        if(d[j]!=s[i])  ctn4++;
        if(e[j]!=s[i])  ctn5++;
        if(f[j]!=s[i])  ctn6++;


        j++;
        if(j>2) j=0;
    }

    int ans=min({ctn1,ctn2,ctn3,ctn4,ctn5,ctn6});

    cout<<ans<<'\n';
    
   }
    
     
     
    return 0;
}