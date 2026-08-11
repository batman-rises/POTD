class Solution {
public:
    int helper(int n){
        int p=1;
        while(n!=0){
            p=p*(n%10);
            n=n/10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        while(true){
            int p=helper(n);
            if(p%t==0)return n;
            n++;
        }
        return -1;
    }
};