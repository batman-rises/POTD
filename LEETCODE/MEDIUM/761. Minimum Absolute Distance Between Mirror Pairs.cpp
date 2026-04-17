class Solution {
public:
    int getReverse(int n){
        int rev=0;
        while(n>0){
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                ans=min(ans,i-mp[nums[i]]);
            }
            mp[getReverse(nums[i])]=i;
        }
        return ans==INT_MAX ? -1 : ans;
    }
};