class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //int n=a.size();
        int maxi=INT_MIN;
        int s=0;
        for(int n:nums){
            s+=n;
            if(s>maxi){
                maxi=s;
            }
            if(s<0){
                s=0;
            }
        }
        return maxi;
    }
};