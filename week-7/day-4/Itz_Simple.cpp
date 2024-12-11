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
    int c,v,b;
    cin>>c>>v>>b;
    
    int sum=0;
    int mx=INT_MIN;
    for (int i = 0; i < c; i++)
    {
        int x;
        cin>>x;
        mx=max(mx,x);
        sum+=x;

    }

    int borun=sum-mx+b;
    int dev=mx+v;

    if(dev>borun){
        cout<<"Ved\n";
    }else if(borun>dev){
        cout<<"Varun\n";
    }else{
        cout<<"Equal\n";
    }
    
   }
    
     
     
    return 0;
}