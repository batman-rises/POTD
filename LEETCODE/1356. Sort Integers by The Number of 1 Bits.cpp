class Solution {
public:
    int helper(int n){
        int cnt=0;
        while(n>0){
            if(n%2==1)cnt++;
            n=n/2;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> min_h;
        for(int a:arr){
            min_h.push({helper(a),a});
        }
        vector<int>res;
        while(!min_h.empty()){
            res.push_back(min_h.top().second);
            min_h.pop();
        }
        return res;
    }
};