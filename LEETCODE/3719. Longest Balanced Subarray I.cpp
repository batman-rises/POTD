class Solution {
public:
    int longestBalanced(vector<int>& a) {
        int n = a.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            set<int> even, odd; // Reset sets for each new starting point
            for (int j = i; j < n; j++) {
                if (a[j] % 2 == 0) {
                    even.insert(a[j]);
                } else {
                    odd.insert(a[j]);
                }
                if (even.size() == odd.size()) {
                    // Update max_len with the total number of unique elements
                    res=max(res,j-i+1);
                }
            }
        }
        return res;
    }
};
