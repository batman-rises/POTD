class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int n = bank.size();
        int m = bank[0].size();
        int ans = 0;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int c1 = 0;
            for (int j = 0; j < m; j++)
            {
                if (bank[i][j] == '1')
                { // ✅ fixed 'a' → 'bank'
                    c1++;
                }
            }
            mp[i] = c1;
        }

        // ✅ logic fix: skip zero rows
        int prev = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[i] == 0)
                continue; // skip rows with no devices

            ans += prev * mp[i];

            prev = mp[i];
        }

        return ans; // ✅ added missing return statement
    }
};
