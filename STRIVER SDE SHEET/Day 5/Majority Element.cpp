class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int el=-1;
        int n=nums.size();
        for(int n:nums){
            if(cnt==0){
                el=n;
                
            }
            if(el==n)cnt++;
            else
            cnt--;
        }
        int cnt2=0;
        for(int n:nums){
            if(n==el){
                cnt2++;
            }
        }
        return (cnt2>(n/2)) ? el:-1;
    }
};