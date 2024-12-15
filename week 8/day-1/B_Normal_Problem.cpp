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
    vector<char>v;
    for (int i = s.size()-1; i >=0; i--)
    {
        if(s[i]=='p'){
            v.push_back('q');
        }else if(s[i]=='q'){
            v.push_back('p');
        }else{
            v.push_back(s[i]);
        }
    }

    for(char c:v){
        cout<<c;
    }
    cout<<'\n';
    
   }
    
     
     
    return 0;
}