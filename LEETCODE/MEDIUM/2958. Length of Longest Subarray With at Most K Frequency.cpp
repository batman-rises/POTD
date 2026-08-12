class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        // for(int i:nums){
        //     mp[i]++;
        // }

        int r=0,l=0;
        int maxi=INT_MIN;
        while(r<nums.size()){
            int x=nums[r];
            mp[x]++;
            if(mp[x]<=k){
                maxi=max(maxi,r-l+1);
            }
            while(mp[x]>k){
                mp[nums[l]]--;
                l++;
            }
            r++;
        }
        return maxi;
    }
};