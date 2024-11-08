#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int n;
   cin>>n;
   multiset<int>ml;
   for (int i = 0; i < n; i++)
   {
    int x;
    cin>>x;
    ml.insert(x);
   }

   for(auto it:ml)
   {
        cout<<it<<" ";
   }
   cout<<endl;
//    cout<<ml.size()<<endl;
//    auto it=ml.find(9);
//    if(it!=ml.end())
//    {
//      cout<<*it<<endl;

//    }else{
//      cout<<"not found"<<endl;
//    }


// cout<<ml.count(9)<<endl;
// auto ff=ml.find(9);
//  ml.erase(ff);

    // auto ll=ml.lower_bound(6);
    auto ll=ml.upper_bound(9);

    if(ll!=ml.end())
    {
        cout<<*ll<<endl;
    }

    // ml.erase(ll);

    for(auto it:ml)
   {
        cout<<it<<" ";
   }
   cout<<endl;
     
     
    return 0;
}