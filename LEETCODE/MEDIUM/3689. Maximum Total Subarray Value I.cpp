class Solution {
public:
    long long maxTotalValue(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int n=a.size();
        long long ans=0;
        while(k--){
            ans+=(a[n-1]-a[0]);
        }
        return ans;
    }
};