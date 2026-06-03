class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        //ans.push_back(intervals[0]);
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++){
            if(ans.empty()){
                ans.push_back(intervals[i]);
                continue;
            }
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(start <= ans.back()[1]){
                ans.back()[1]=max(ans.back()[1],end);
            }else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};