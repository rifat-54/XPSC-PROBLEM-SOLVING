#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   string s;
   cin>>s;
   int dif=4-s.length();
   for (int i = 0; i <dif; i++)
   {
    //  s[i]=0+s[i];
    s="0"+s;
   }
    cout<<s<<endl;
     
     
    return 0;
}