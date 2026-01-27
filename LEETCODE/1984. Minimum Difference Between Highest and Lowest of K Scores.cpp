class Solution {
public:
    int minimumDifference(vector<int>& a, int k) {
        int n=a.size();
        if(n<=1)return 0;
        sort(a.begin(),a.end());
        int ans=1e8;
        
        for(int i=0;i<=n-k;i++){
            ans=min(ans,a[i+k-1]-a[i]);
        }
        return ans;
    }
};