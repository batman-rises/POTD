class Solution
{
public:
    vector<int> getSneakyNumbers(vector<int> &nums)
    {
        map<int, int> mp;
        for (int i : nums)
        {
            mp[i]++;
        }

        vector<int> ans;
        for (auto it : mp)
        {
            if (it.second >= 2)
            {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};
