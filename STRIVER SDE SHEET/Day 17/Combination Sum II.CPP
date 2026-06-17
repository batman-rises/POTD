class Solution {
public:
    void func(vector<int>& a,int ind,int target,vector<int> &ds,vector<vector<int>> &ans){
        //base
        if(target<0)return;
        
            if(target==0){
                ans.push_back(ds);
                return;
            }
        
        for(int i=ind;i<a.size();i++){
            if(i>ind && a[i]==a[i-1])continue;
            if(a[i]<=target){
                ds.push_back(a[i]);
                func(a,i+1,target-a[i],ds,ans);
                ds.pop_back();
            }
            
        }
        
        return;

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        func(candidates,0,target,ds,ans);
        return ans;
    }
};