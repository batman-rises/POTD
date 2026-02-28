class Solution {
public:
    int Mod=1e9+7;
    int concatenatedBinary(int n) {
        long res=0;
        long digits=0;
        for(int i=1;i<=n;i++){
            if((i &(i-1))==0){
                digits++;
            }
            res=((res<<digits)%Mod + i)%Mod;
        }
        return res;
    }
};