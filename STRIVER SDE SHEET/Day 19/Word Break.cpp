class Solution {
public:
    bool solve(int i,int n,string &s,unordered_map<string,int> &mp,vector<int> &dp){
        if(i>=n)return true;

        if(mp.find(s)!=mp.end())return true;

        if(dp[i] != -1)return false;

        for(int len=1;len<=n;len++){
            string temp=s.substr(i,len);
            if(mp.find(temp)!=mp.end() && solve(i+len,n,s,mp,dp))
                return dp[i]=true;
        }
        return dp[i]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,int> mp;


        for(string x:wordDict){
            mp[x]=1;
        }
        int n=s.size();
        vector<int> dp(n,-1);
        return solve(0,n,s,mp,dp);
    }
};