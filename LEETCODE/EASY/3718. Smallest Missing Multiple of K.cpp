class Solution {
public:
    int missingMultiple(vector<int>& a, int k) {
        set<int> st;
        st.insert(a.begin(),a.end());
        int x=k;
        while(true){
            if(st.find(x) == st.end()){
                return x;
            }
            x+=k;
        }
        return -1;
    }
};