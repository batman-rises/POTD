class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        int elm1, cnt1 = 0;
        int elm2, cnt2 = 0;

        // Boyer-Moore Voting Algorithm (Phase 1: Find candidates)
        for (int n : a) {
            if (cnt1 == 0 && n != elm2) {
                elm1 = n;
                cnt1++;
            } else if (cnt2 == 0 && n != elm1) {
                elm2 = n;
                cnt2++;
            } else if (n == elm1) {
                cnt1++;
            } else if (n == elm2) {
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }

        // Phase 2: Verify candidates actually appear > n/3 times
        int x = 0, y = 0;
        for (int n : a) {
            if (n == elm1) x++;
            if (n == elm2) y++;
        }

        vector<int> ans;
        if (x > (a.size() / 3)) 
            ans.push_back(elm1);
        if (y > (a.size() / 3)) 
            ans.push_back(elm2);

        return ans;
    }
};