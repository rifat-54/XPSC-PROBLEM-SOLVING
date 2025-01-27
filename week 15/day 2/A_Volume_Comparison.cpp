#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int a,b,c,d;
   cin>>a>>b>>c>>d;
    int total=a*b*c;
    int cube=d*d*d;

    if(total>cube){
        cout<<"Cuboid\n";
    }else if(total<cube){
        cout<<"Cube\n";
    }else{
        cout<<"Equal\n";
    }
     
     
    return 0;
}