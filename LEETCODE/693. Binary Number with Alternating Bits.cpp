//APPROACH 1

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int curBit=n%2;
        n=n/2;
        while(n!=0){
            int x=n%2;
            if(x==curBit)return false;

            curBit=x;
            n=n/2;
        }
        return true;
    }
};


//APPROACH 2

class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32>b(n);
        int HSB=log2(n);
        for(int i=0;i<=HSB;i++){
            if(b[i]==b[i+1])return false;
        }
        return true;
    }
};

//APPROACH 3

class Solution {
public:
    bool hasAlternatingBits(int n) {
        long res= n ^ (n>>1);
        return (res & (res+1))==0;
    }
};