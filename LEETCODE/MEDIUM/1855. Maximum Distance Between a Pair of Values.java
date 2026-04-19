class Solution {
    public int maxDistance(int[] nums1, int[] nums2) {
        int n=nums1.length;
        int m=nums2.length;
        int i=0,j=0;
        int ans=-100000;
        while(i<n && j<m){
            if(nums1[i]>nums2[j]){
                i++;
            }else{
                if(i<=j){
                    ans=Math.max(ans,j-i);
                }
                j++;
            }
        }
        return ans == -100000 ? 0 : ans;
    }
}
