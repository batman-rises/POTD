class Solution {
public:
    int func(int n){
        int cnt=0;
        while(n>0){
            if(n%2==1)
            cnt++;

            n=n/2;

        }
        return cnt;
    }
    bool isPrime(int n){
        if(n==1)return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            int setBits=func(i);
            if(isPrime(setBits)==true)cnt++;
        }
        return cnt;
    }
};