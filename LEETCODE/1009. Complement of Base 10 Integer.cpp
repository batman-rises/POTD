class Solution {
public:
    int helper(string s){
        int res=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            res+=(pow(2,i)*s[i]);
        }
        return res;
    }
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        string res="";
        while(n!=0){
            int a=n%2;
            res.push_back(a^1);
            n=n/2;
        }
        return helper(res);
    }
};