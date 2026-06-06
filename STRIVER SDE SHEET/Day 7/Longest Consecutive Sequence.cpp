class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        if(a.size()<=1)return a.size();
        set<int> st;
        for(int n:a){
            st.insert(n);
        }
        int maxi=-1;
        for(auto it:st){

            if(st.find(it-1)==st.end()){//discover the first elm
                int x=it;
                int cnt=1;
                while(st.find(x+1) != st.end()){
                    x=x+1;
                    cnt++;
                }
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
        
    }
};