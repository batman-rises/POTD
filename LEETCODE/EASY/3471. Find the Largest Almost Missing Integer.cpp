class Solution {
public:
    int largestInteger(vector<int>& a, int k) {
        int n = a.size();

        unordered_map<int,int> mp;
        for(int x : a)
            mp[x]++;

        if(k == 1) {
            int ans = -1;

            for(auto [x, freq] : mp) {
                if(freq == 1)
                    ans = max(ans, x);
            }

            return ans;
        }

        if(k == n) {
            int ans = *max_element(a.begin(),a.end());

            return ans;
        }

        int first = a[0];
        int last = a[n-1];

        int ans = -1;

        if(mp[first] == 1)
            ans = max(ans, first);

        if(mp[last] == 1)
            ans = max(ans, last);

        return ans;
    }
};