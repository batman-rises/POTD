class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mp[256];
        fill(mp,mp+256,-1);
        
        int l=0,r=0;
        int maxi=0;
        while(r<s.size()){
            //already visites
            if(mp[s[r]] != -1){
                //l se bara hai
                if(mp[s[r]]>=l){
                    l=mp[s[r]]+1;
                }
            }
            maxi=max(maxi,r-l+1);
            mp[s[r]]=r; 
            r++;
        }
        return maxi;
    }
};