class Solution {
public:
    void func(vector<int>& a,int i,int target,vector<int> &ds,vector<vector<int>> &ans){
        //base
        if(target<0)return;
        if(i==a.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }

        if(a[i]<=target){
                ds.push_back(a[i]);
                func(a,i,target-a[i],ds,ans);
                ds.pop_back();
        }
        func(a,i+1,target,ds,ans);
        return;

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        func(candidates,0,target,ds,ans);
        return ans;
    }
};