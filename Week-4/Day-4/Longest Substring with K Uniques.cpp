public:
    int longestKSubstr(string s, int k) {
    
    int n=s.size();
    int l=0,r=0,ans=-1;
    map<char,int>mp;
    while(r<n)
        {
            mp[s[r]]++;
            if(mp.size()==k)
            {
                ans=max(ans,r-l+1);
            }else{
                while(l<r && mp.size()>k)
                {
                    mp[s[l]]--;
                    if(mp[s[l]]==0)
                    {
                        mp.erase(s[l]);
                        
                    }
                    l++;
                }
                    
                
           }
           r++;
        }
        return ans;
    }