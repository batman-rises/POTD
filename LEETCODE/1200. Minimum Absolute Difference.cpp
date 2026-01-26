class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
        sort(a.begin(),a.end());
         vector<vector<int>> ans;
         int n=a.size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>min_h;
        for(int i=1;i<n;i++){
            min_h.push({a[i]-a[i-1],{a[i-1],a[i]}});
        }
        int last = min_h.top().first ;
        while(!min_h.empty() && min_h.top().first == last){
            int x=min_h.top().second.first;
            last=min_h.top().first;
            int y=min_h.top().second.second;
            min_h.pop();
            ans.push_back({x,y});
        }
        return ans;
    }
};