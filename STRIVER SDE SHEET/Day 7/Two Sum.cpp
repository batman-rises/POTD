class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int,int>mp;
        int s=0;
        for(int i=0;i<a.size();i++){
            
            int moreNeeded=target-a[i];
            if(mp.find(moreNeeded) != mp.end()){
                return {mp[moreNeeded],i};
            }
            mp[a[i]]=i;
        }
        return {-1,-1};
    }
};