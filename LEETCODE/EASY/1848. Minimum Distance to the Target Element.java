class Solution {
    public int getMinDistance(int[] a, int target, int start) {
        int n=a.length;
        int mini=10000000;
        for(int i=0;i<start;i++){
            if(a[i]==target){
                mini=Math.min(mini,Math.abs(start-i));
            }
        }
        for(int i=start;i<n;i++){
            if(a[i]==target){
                mini=Math.min(mini,Math.abs(start-i));
            }
        }
        return mini;
    }
}