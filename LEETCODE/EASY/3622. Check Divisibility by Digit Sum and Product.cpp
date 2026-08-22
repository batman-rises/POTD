class Solution {
public:
    bool checkDivisibility(int n) {
        int m=n;
        int s=0,p=1;
        while(n != 0){
            int a=n%10;
            s+=a;
            p*=a;
            n=n/10;
        }
        return (m%(s+p)==0);
    }
};