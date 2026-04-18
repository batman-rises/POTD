class Solution {
    public int getReverse(int n){ 
        int rev=0; while(n>0){ 
            int rem=n%10; 
            rev=rev*10+rem; 
            n=n/10; 
        } 
        return rev; 
    }
    
    public int mirrorDistance(int n) {
        if(n<=0 && n<10)return 0;
        int rev=getReverse(n);
        return Math.abs(n-rev);
    }
}