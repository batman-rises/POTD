class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        // fill(hash,hash+10,0);
        for(int n:nums){
            hash[n]++;
        }
        for(int n:nums){
            if(hash[n]>1)
                return n;
        }
        return -1;
    }

};