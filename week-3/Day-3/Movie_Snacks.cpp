#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    int a,b,c;
    cin>>a>>b>>c;
    int type1=a*2+b*3;
    int type2=c*2+b;
    int type3=c+a+b*2;
    set<int>s;
    s.insert(type1);
    s.insert(type2);
    s.insert(type3);
    cout<<*s.begin();
     
     
    return 0;
}