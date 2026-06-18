class Solution {
public:
    void func(int i,vector<int> &a,vector<int> &hash,vector<int> &ds,vector<vector<int>> &ans){
        
            if(ds.size()==a.size()){
                ans.push_back(ds);
                return;
            }
            
        for(int i=0;i<a.size();i++){
            if(hash[i] == 0){
                ds.push_back(a[i]);
                hash[i]=1;
            
                func(i+1,a,hash,ds,ans);
                hash[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& a) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        int n=a.size();
            vector<int>hash(n+1,0);
        
            func(0,a,hash,ds,ans);
        
        return ans;
    }
};