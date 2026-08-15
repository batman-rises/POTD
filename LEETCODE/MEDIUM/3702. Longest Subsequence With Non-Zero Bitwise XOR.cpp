class Solution {
public:
    int longestSubsequence(vector<int>& a) {
        int n=a.size();
        int totalXor=0;
        bool allZeros=true;

        for(int i:a){
            totalXor^=i;

            if(i!=0){//we atleast got one non zero element
                allZeros=false;
            }
        }

        if(totalXor==0){
            if(allZeros==true){
                return 0;
            }
            return n-1;
        }
        return n;
    }
};