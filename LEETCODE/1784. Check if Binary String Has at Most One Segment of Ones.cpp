class Solution {
public:
    bool checkOnesSegment(string s) {
        int c1=0,c2=0;
        int N=s.size();
        for(int i=1;i<N;i++){
            if(s[i-1]=='0' && s[i]=='1'){
                return false;
            }
        }
       
            return true;
       
    }
};