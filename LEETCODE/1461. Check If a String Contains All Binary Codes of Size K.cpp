class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        unordered_set<string> st;
        int codes=1<<k;//pow(k,2)
        for(int i=k;i<=n;i++){
            if(codes==0)return true;
            string x=s.substr(i-k,k);
            if(st.count(x)==0){
                st.insert(x);
                codes--;
            }
        }
        return codes==0;
    }
};