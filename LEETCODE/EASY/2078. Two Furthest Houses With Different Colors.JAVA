class Solution {
    public int maxDistance(int[] colors) {
        int n=colors.length;
        int ans=-100000;
        for(int i=0;i<n;i++){
            if(colors[0]!=colors[i]){
                ans=Math.max(ans,i-0);
            }
            if(colors[n-1]!=colors[i]){
                ans=Math.max(ans,n-1-i);
            }
        }
        
        return ans;
    }
}