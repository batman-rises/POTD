class Solution {
public:
    vector<int> generateRow(int n){
        int ans=1;
        vector<int> ds;
        ds.push_back(1);
        for(int i=1;i<n;i++){
            ans=ans*(n-i);
            ans=ans/i;
            ds.push_back(ans);
        }
        return ds;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i=1;i<=numRows;i++){
            vector<int> ds=generateRow(i);
            ans.push_back(ds);
        }
        return ans;
    }
};