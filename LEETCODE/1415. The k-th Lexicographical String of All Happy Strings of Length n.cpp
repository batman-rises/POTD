class Solution {
public:
    void solve(vector<string> &res,string cur,int n){
        if(cur.size()==n){
            res.push_back(cur);
            return;
        }
        for(char ch='a';ch<='c';ch++){
            if(!cur.empty() && cur.back()==ch){
                continue;
            }
            cur.push_back(ch);
            solve(res,cur,n);
            //undo
            cur.pop_back();
        }
    }
    string getHappyString(int n, int k) {
        vector<string> res;
        string cur="";
        solve(res,cur,n);
        if(res.size()<k)
        return "";
        return res[k-1];
    }
};