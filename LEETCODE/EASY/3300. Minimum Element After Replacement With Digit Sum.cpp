class Solution {
public:
    int helper(int n){
        if(n<10)return n;
        int s=0;
        while(n!=0){
            s+=(n%10);
            n=n/10;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int n:nums){
            ans=min(ans,helper(n));
        }
        return ans;
    }
};