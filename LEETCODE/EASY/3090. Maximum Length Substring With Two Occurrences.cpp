class Solution {
public:
    int maximumLengthSubstring(string s) {
        //unordered_map<char,int> mp;
        int mp[26]={};
        int l=0,r=0;
        int n=s.size();
        int ans=INT_MIN;
        while(r<n){
            char ch=s[r];
            mp[ch-'a']++;
            while(mp[ch-'a']>2){
                mp[s[l]-'a']--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};