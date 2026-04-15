class Solution {
    public int closestTarget(String[] words, String target, int startIndex) {
        int n=words.length;
        int ans=1000000;
        for(int i=0;i<n;i++){
            if (target.equals(words[i])) {
                int normalDistance=Math.abs(i-startIndex);
                int circularDistance=n-normalDistance;
                ans=Math.min(ans,Math.min(normalDistance,circularDistance));
            }
        }
        return ans == 1000000 ? -1 : ans; 
    }
}