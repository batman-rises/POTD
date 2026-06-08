class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        unordered_map<int,int> mp;
        int pre=0;
        mp[0]=1;
        int cnt=0;
        for(int i:nums){
            pre^=i;
            int rem=pre^k;
            cnt+=mp[rem];
            mp[pre]+=1;
        }
        return cnt;
    }
};